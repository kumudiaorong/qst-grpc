#!/bin/bash
set -e
if [ $1 = "clean" ]; then
    rm -rf cpp
    exit 0
fi
cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -S$PWD -Bbuild -G Ninja
cmake --build build --config Release --target all --
rm -rf build
