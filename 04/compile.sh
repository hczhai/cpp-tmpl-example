#!/usr/bin/env bash

g++ -O3 -c main2.cpp -o main2.o
g++ -O3 -c main.cpp -o main.o
g++ -O3 main.o main2.o -o main.x
./main.x
rm main.o main2.o