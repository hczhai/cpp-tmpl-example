#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
T multiply(T a, T b) { return a * b; }

#define TMPL_EXTERN extern

#define TMPL_T int
#include "multiply_tmpl.hpp"
#undef TMPL_T

#define TMPL_T float
#include "multiply_tmpl.hpp"
#undef TMPL_T

#define TMPL_T double
#include "multiply_tmpl.hpp"
#undef TMPL_T

#undef TMPL_EXTERN
