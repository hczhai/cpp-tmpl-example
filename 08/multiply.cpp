

#include "multiply.hpp"

#define TMPL_T int
#include "multiply_tmpl.hpp"
#undef TMPL_T

#define TMPL_T float
#include "multiply_tmpl.hpp"
#undef TMPL_T

#define TMPL_T double
#include "multiply_tmpl.hpp"
#undef TMPL_T
