#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
CERDAR_DIR="${ROOT_DIR}/CerdAR"
FETCH_SCRIPT="${ROOT_DIR}/CerdAR/Scripts/fetch_libiPhone-lib.sh"

log() { echo "[bootstrap] $*"; }

log "Repo root: ${ROOT_DIR}"

# 0) 必要コマンドの存在チェック
command -v ruby >/dev/null 2>&1 || { echo "[bootstrap] ERROR: ruby not found"; exit 1; }
command -v pod  >/dev/null 2>&1 || { echo "[bootstrap] ERROR: CocoaPods (pod) not found. Install: sudo gem install cocoapods"; exit 1; }

# 1) libiPhone-lib.a を取得（すでにあればスキップ）
if [[ -x "${FETCH_SCRIPT}" ]]; then
  log "Fetching libiPhone-lib.a (if needed)..."
  bash "${FETCH_SCRIPT}"
else
  echo "[bootstrap] ERROR: fetch script not found or not executable: ${FETCH_SCRIPT}"
  exit 1
fi

# 2) CocoaPods セットアップ
if [[ -f "${CERDAR_DIR}/Podfile" ]]; then
  log "Running pod install (if needed)..."
  cd "${CERDAR_DIR}"

  # Pods が無い or lock不一致なら pod install
  if [[ ! -d "Pods" ]] || [[ ! -f "Pods/Manifest.lock" ]]; then
    log "Pods missing -> pod install"
    pod install
  else
    if ! diff -q "Podfile.lock" "Pods/Manifest.lock" >/dev/null 2>&1; then
      log "Lock mismatch -> pod install"
      pod install
    else
      log "Pods are up-to-date. (skip)"
    fi
  fi
else
  echo "[bootstrap] ERROR: Podfile not found at: ${CERDAR_DIR}/Podfile"
  exit 1
fi

log "Done."
log "Open workspace: open \"${CERDAR_DIR}/CerdAR.xcworkspace\""

