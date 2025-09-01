#!/bin/bash

cd ../..
cd build
cmake ..
make -j 20
cd modules/calculadora
./calculadora
