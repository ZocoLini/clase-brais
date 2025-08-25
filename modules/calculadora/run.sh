#!/bin/bash

cd ../..
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make -j 20
cd modules/calculadora
./calculadora
