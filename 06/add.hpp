#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
T add(T a, T b) { return a + b; }

extern template int add<int>(int a, int b);
extern template float add<float>(float a, float b);
extern template double add<double>(double a, double b);