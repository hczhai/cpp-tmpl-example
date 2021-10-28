


#ifdef TMPL_NAME

#define STRINGIFY(M) #M
#define STRINGIFY2(M) STRINGIFY(M)
#define CAT(X, Y) X##Y
#define NAME_IMPL(X, Y) STRINGIFY2(CAT(X,Y))

#define TMPL_T int
#include NAME_IMPL(TMPL_NAME,_tmpl.hpp)
#undef TMPL_T

#define TMPL_T float
#include NAME_IMPL(TMPL_NAME,_tmpl.hpp)
#undef TMPL_T

#define TMPL_T double
#include NAME_IMPL(TMPL_NAME,_tmpl.hpp)
#undef TMPL_T

#undef NAME_IMPL
#undef CAT
#undef STRINGIFY2
#undef STRINGIFY

#endif