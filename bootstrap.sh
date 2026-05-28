#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
CERDAR_DIR="${ROOT_DIR}/CerdAR"
FETCH_SCRIPT="${CERDAR_DIR}/Scripts/fetch_libiPhone-lib.sh"
UNITY_PBXPROJ="${CERDAR_DIR}/UnityApp/Unity-iPhone.xcodeproj/project.pbxproj"
PODS_DIR="${CERDAR_DIR}/Pods"
PODFILE="${CERDAR_DIR}/Podfile"
PODFILE_LOCK="${CERDAR_DIR}/Podfile.lock"
MANIFEST_LOCK="${PODS_DIR}/Manifest.lock"
MME_REL_PATH="MapboxMobileEvents/Sources/MapboxMobileEvents/MMEReachability.m"
MME_FILE="${PODS_DIR}/${MME_REL_PATH}"

log() { echo "[bootstrap] $*"; }
warn() { echo "[bootstrap] WARNING: $*" >&2; }
err() { echo "[bootstrap] ERROR: $*" >&2; }

require_command() {
  local cmd="$1"
  local hint="${2:-}"
  if ! command -v "$cmd" >/dev/null 2>&1; then
    err "$cmd not found${hint:+. $hint}"
    exit 1
  fi
}

fetch_libiPhone_lib() {
  if [[ -x "${FETCH_SCRIPT}" ]]; then
    log "Fetching libiPhone-lib.a (if needed)..."
    bash "${FETCH_SCRIPT}"
  else
    err "fetch script not found or not executable: ${FETCH_SCRIPT}"
    exit 1
  fi
}

fix_mno_thumb_flag() {
  if [[ -f "${UNITY_PBXPROJ}" ]]; then
    log "Fixing unsupported '-mno-thumb' flag..."
    sed -i '' 's/-mno-thumb//g' "${UNITY_PBXPROJ}"
  else
    warn "Unity project file not found: ${UNITY_PBXPROJ}"
  fi
}

ensure_podfile_exists() {
  if [[ ! -f "${PODFILE}" ]]; then
    err "Podfile not found at: ${PODFILE}"
    exit 1
  fi
}

run_pod_install_if_needed() {
  cd "${CERDAR_DIR}"

  if [[ ! -d "${PODS_DIR}" ]] || [[ ! -f "${MANIFEST_LOCK}" ]]; then
    log "Pods missing -> pod install"
    pod install
    return
  fi

  if [[ ! -f "${PODFILE_LOCK}" ]]; then
    log "Podfile.lock missing -> pod install"
    pod install
    return
  fi

  if ! diff -q "${PODFILE_LOCK}" "${MANIFEST_LOCK}" >/dev/null 2>&1; then
    log "Lock mismatch -> pod install"
    pod install
    return
  fi

  log "Pods are up-to-date. (skip)"
}

remove_pods_dir() {
  if [[ ! -d "${PODS_DIR}" ]]; then
    return 0
  fi

  if rm -rf "${PODS_DIR}" 2>/dev/null; then
    log "Removed Pods without sudo."
    return 0
  fi

  log "Normal removal failed. Trying sudo rm -rf Pods ..."
  sudo rm -rf "${PODS_DIR}"
}

reinstall_pods() {
  log "Recreating Pods directory..."
  remove_pods_dir
  cd "${CERDAR_DIR}"
  pod install
}

patch_mme_file_once() {
  local mme_file="$1"

  if [[ ! -f "${mme_file}" ]]; then
    warn "${mme_file} not found"
    return 2
  fi

  chmod -N "${mme_file}" 2>/dev/null || true
  chflags nouchg "${mme_file}" 2>/dev/null || true

  ruby - "${mme_file}" <<'RUBY'
require "tempfile"
require "fileutils"

path = ARGV[0]
dir  = File.dirname(path)
text = File.read(path)

new_text = text
  .gsub(/^\s*#import\s+<netinet6\/in6\.h>\s*$/, "#import <netinet/in.h>")
  .gsub(/^\s*#include\s+<netinet6\/in6\.h>\s*$/, "#include <netinet/in.h>")
  .gsub(/(#import <netinet\/in\.h>\n)+/, "#import <netinet/in.h>\n")
  

if text == new_text
  puts "[bootstrap] No patch needed for #{path}"
  exit 0
end

tmp = Tempfile.new(["MMEReachability", ".m"], dir)
begin
  tmp.write(new_text)
  tmp.close

  begin
    st = File.stat(path)
    File.chmod(st.mode, tmp.path) rescue nil
  rescue
  end

  FileUtils.mv(tmp.path, path, force: true)
  puts "[bootstrap] Patched #{path}"
rescue => e
  warn "[bootstrap] Patch failed for #{path}: #{e.class}: #{e.message}"
  exit 1
ensure
  begin
    tmp.close!
  rescue
  end
end
RUBY
}

patch_mapbox_mobile_events() {
  log "Patching MapboxMobileEvents private header import..."

  if patch_mme_file_once "${MME_FILE}"; then
    return 0
  fi

  log "Initial patch failed. Reinstalling Pods and retrying once..."
  reinstall_pods

  if patch_mme_file_once "${MME_FILE}"; then
    return 0
  fi

  err "Failed to patch ${MME_FILE} even after recreating Pods"
  exit 1
}

main() {
  log "Repo root: ${ROOT_DIR}"

  require_command ruby
  require_command pod "Install CocoaPods first."
  require_command sed
  require_command diff
  require_command bash

  ensure_podfile_exists
  fetch_libiPhone_lib
  fix_mno_thumb_flag
  run_pod_install_if_needed
  patch_mapbox_mobile_events

  log "Done."
  log "Open workspace: open \"${CERDAR_DIR}/CerdAR.xcworkspace\""
}

main "$@"