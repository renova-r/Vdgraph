# Vdgraph 2.2.7.9001

Renova release, based on CRAN Vdgraph 2.2-7 (archived on CRAN 2024-10-22).

- `src/init.c` (new): `R_init_Vdgraph` registers the `.Fortran` routine `vdg` (5 arguments) and disables dynamic symbol lookup; `NAMESPACE` now reads `useDynLib(Vdgraph, .registration = TRUE)`.
- `DESCRIPTION`: `Author: John Lawson <email>, with contributions from G. Vining` became `Author: John Lawson [aut, cre], G. Vining [ctb]` with an equivalent `Authors@R` entry; the stale optional `Date: 2023-09-06` field was removed (metadata only).
- `DESCRIPTION`: `Version` set to `2.2.7.9001`; "Compatibility updates by Renova." appended to `Description`.
- The stale `MD5` file was removed.
- `COPYING` (GNU GPL text) was added; the `License` field is unchanged.
- `README.md` was added and `.Rbuildignore` keeps `README.md` and `NEWS.md` out of the built package.
