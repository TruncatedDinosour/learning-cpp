#!/bin/sh

mkdir bin || true
cd bin
conan install .. --build=missing
cmake ..
cmake --build .
make
