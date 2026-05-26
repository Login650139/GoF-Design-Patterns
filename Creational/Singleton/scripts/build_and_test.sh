#!/bin/bash
set -e

BUILD_DIR="build"
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release

echo "Запуск тестов..."
ctest --output-on-failure

echo "Сборка deb-пакета..."
cpack -G DEB
