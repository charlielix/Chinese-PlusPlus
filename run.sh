#!/usr/bin/env bash
# ============================================================
# Chinese-Plus-Plus 一键编译运行
#
#   ./run.sh                 编译 TESTING/main.cpp 并运行
#   ./run.sh 参数...         同上，参数会传给程序
#
# 可用环境变量覆盖默认行为：
#   CXX=clang++              指定编译器
#   STD=c++20                指定语言标准（默认 c++23）
#   OPT="-O0 -g"             指定优化/调试选项（默认 -O2）
#
# 注意：shell 里的 alias（例如 alias g++=g++-16）在脚本中不生效，
#       本脚本会自己挑选 Homebrew 安装的最高版本 g++-NN。
# ============================================================

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="$ROOT/TESTING/main.cpp"
OUT_DIR="$ROOT/build"
OUT="$OUT_DIR/中文示例"

STD="${STD:-c++23}"
OPT="${OPT:--O2}"

find_compiler() {
    if [[ -n "${CXX:-}" ]]; then
        printf '%s\n' "$CXX"
        return 0
    fi

    # 优先 Homebrew 的带版本号 g++（取最高版本）
    local best="" best_ver=0 dir cand ver ver_num
    for dir in /opt/homebrew/bin /usr/local/bin ${PATH//:/ }; do
        for cand in "$dir"/g++-*; do
            [[ -x "$cand" ]] || continue
            ver="${cand##*/g++-}"
            [[ "$ver" =~ ^[0-9]+$ ]] || continue
            ver_num=$((10#$ver))
            if (( ver_num > best_ver )); then
                best_ver="$ver_num"
                best="$cand"
            fi
        done
    done
    if [[ -n "$best" ]]; then
        printf '%s\n' "$best"
        return 0
    fi

    local fallback
    for fallback in g++ clang++; do
        if command -v "$fallback" >/dev/null 2>&1; then
            command -v "$fallback"
            return 0
        fi
    done

    return 1
}

if [[ ! -f "$SRC" ]]; then
    echo "错误：找不到源文件 $SRC" >&2
    exit 1
fi

if ! COMPILER="$(find_compiler)"; then
    echo "错误：未找到 C++ 编译器，请安装 g++（brew install gcc）或用 CXX= 指定" >&2
    exit 1
fi

mkdir -p "$OUT_DIR"

echo "编译器：$("$COMPILER" --version | head -1)"
echo "标准：$STD   优化：$OPT"

rm -rf "$OUT" "$OUT.dSYM"   # 避免编译失败时残留旧产物

# shellcheck disable=SC2086  # OPT 需要按空格拆成多个编译选项
if ! "$COMPILER" -std="$STD" $OPT -Wall -Wextra -pedantic -I"$ROOT/include" "$SRC" -o "$OUT"; then
    echo "编译失败" >&2
    exit 1
fi

exec "$OUT" "$@"
