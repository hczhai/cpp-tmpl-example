#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
T multiply(T a, T b) { return a * b; }

#define TMPL_EXTERN extern

#define TMPL_NAME multiply
#include "t_tmpl.hpp"
#undef TMPL_NAME

#undef TMPL_EXTERN
