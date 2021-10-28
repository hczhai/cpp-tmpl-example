

#include "add.hpp"

#define TMPL_T int
#include "add_tmpl.hpp"
#undef TMPL_T

#define TMPL_T float
#include "add_tmpl.hpp"
#undef TMPL_T

#define TMPL_T double
#include "add_tmpl.hpp"
#undef TMPL_T
