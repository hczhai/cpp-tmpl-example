#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
T multiply(T a, T b) { return a * b; }

extern template int multiply<int>(int a, int b);
extern template float multiply<float>(float a, float b);
extern template double multiply<double>(double a, double b);