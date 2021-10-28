#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
T add(T a, T b) { return a + b; }

#define TMPL_EXTERN extern

#define TMPL_T int
#include "add_tmpl.hpp"
#undef TMPL_T

#define TMPL_T float
#include "add_tmpl.hpp"
#undef TMPL_T

#define TMPL_T double
#include "add_tmpl.hpp"
#undef TMPL_T

#undef TMPL_EXTERN
