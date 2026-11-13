# Vdgraph

Variance dispersion graphs and fraction of design space plots for response surface designs.

Compatibility updates by Renova.

Version 2.2.7.9001 registers the compiled Fortran routine `vdg` in a new `src/init.c` (and declares `.registration = TRUE` in `NAMESPACE`), and updates `DESCRIPTION` metadata: an `Authors@R` entry equivalent to the existing author and maintainer, and removal of the stale optional `Date` field. No R function was changed.

## Install

```r
install.packages("Vdgraph", repos = c(
  Renova = "https://renova-r.r-universe.dev",
  CRAN = "https://cloud.r-project.org"
))
```

Or install this exact release from its tag:

```r
install.packages("remotes")
remotes::install_github("renova-r/Vdgraph@renova-2.2.7.9001")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

Vdgraph is by John Lawson (maintainer), with contributions from G. Vining; the Fortran routine is a modification of the program by G. Geoffrey Vining published in the Journal of Quality Technology 25(1), 1993. The original CRAN package is at <https://CRAN.R-project.org/package=Vdgraph>. License: GPL-2; see [COPYING](COPYING).
