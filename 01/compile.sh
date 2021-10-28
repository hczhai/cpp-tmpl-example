#!/usr/bin/env bash

g++ -O3 -c add.cpp -o add.o
g++ -O3 -c main.cpp -o main.o
g++ -O3 main.o add.o -o main.x
./main.x
rm main.o add.o