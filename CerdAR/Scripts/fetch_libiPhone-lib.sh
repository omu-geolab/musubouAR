#!/usr/bin/env bash
set -euo pipefail

# =========================
# Config
# =========================
URL="https://www.musubou.net/musubou-ar/libiPhone-lib.a"
FILENAME="libiPhone-lib.a"

# このスクリプトは CerdAR/Scripts/ 配下にある想定
# ROOT_DIR => .../CerdAR
ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"

# Unity の Libraries に固定（事故りにくい）
DEST_DIR="${ROOT_DIR}/UnityApp/Libraries"
DEST_FILE="${DEST_DIR}/${FILENAME}"

# 一時ファイル（途中失敗でも壊れた本体を残さない）
TMP_FILE="${DEST_FILE}.download"
LOCK_DIR="${DEST_DIR}/.${FILENAME}.lock"

# =========================
# Helpers
# =========================
log() { echo "[fetch] $*"; }

cleanup() {
  # ロック解除
  if [[ -d "${LOCK_DIR}" ]]; then
    rmdir "${LOCK_DIR}" >/dev/null 2>&1 || true
  fi
  # 途中ファイル掃除（成功時は mv 済みなので存在しない）
  rm -f "${TMP_FILE}" >/dev/null 2>&1 || true
}
trap cleanup EXIT

# =========================
# Main
# =========================
mkdir -p "${DEST_DIR}"

log "Root      : ${ROOT_DIR}"
log "Dest dir  : ${DEST_DIR}"
log "Dest file : ${DEST_FILE}"
log "URL       : ${URL}"

# すでに存在するなら何もしない
if [[ -f "${DEST_FILE}" ]]; then
  # サイズが0なら壊れている可能性があるので再取得
  if [[ ! -s "${DEST_FILE}" ]]; then
    log "Found but empty file. Re-downloading..."
    rm -f "${DEST_FILE}"
  else
    log "Already exists. (size: $(stat -f%z "${DEST_FILE}" 2>/dev/null || wc -c < "${DEST_FILE}") bytes)"
    exit 0
  fi
fi

# 簡易ロック（並列ビルドで二重DLしない）
if ! mkdir "${LOCK_DIR}" 2>/dev/null; then
  log "Another fetch is running. Waiting..."
  # 最大60秒待つ
  for _ in $(seq 1 60); do
    if [[ -f "${DEST_FILE}" && -s "${DEST_FILE}" ]]; then
      log "File appeared. Done."
      exit 0
    fi
    sleep 1
  done
  log "Timeout waiting for lock/file. Aborting."
  exit 1
fi

log "Downloading..."
# -f: HTTPエラーで失敗扱い
# -L: リダイレクト追従
# --retry: 一時エラーのリトライ
curl -fL --retry 3 --retry-delay 2 \
  -o "${TMP_FILE}" \
  "${URL}"

# サイズ0なら失敗扱い
if [[ ! -s "${TMP_FILE}" ]]; then
  log "Downloaded file is empty. Aborting."
  exit 1
fi

# 原子的に置き換え
mv "${TMP_FILE}" "${DEST_FILE}"

# 確認
SIZE="$(stat -f%z "${DEST_FILE}" 2>/dev/null || wc -c < "${DEST_FILE}")"
log "Done. (size: ${SIZE} bytes)"

