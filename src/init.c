#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Fortran calls */
extern void F77_NAME(vdg)(int *ndpts, int *kvar1, int *kdvl, double *rdes, double *vdgr);

static const R_FortranMethodDef FortranEntries[] = {
    {"vdg", (DL_FUNC) &F77_NAME(vdg), 5},
    {NULL, NULL, 0}
};

void R_init_Vdgraph(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
