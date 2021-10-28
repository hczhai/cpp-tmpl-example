#!/usr/bin/env bash

g++ -O3 -c add.cpp -o add.o
g++ -O3 -c multiply.cpp -o multiply.o
g++ -O3 -c main2.cpp -o main2.o
g++ -O3 -c main.cpp -o main.o
g++ -O3 main.o main2.o add.o multiply.o -o main.x
./main.x
rm main.o main2.o add.o multiply.o