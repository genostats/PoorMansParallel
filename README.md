# PoorMansReduce

This is an experiment to understand multi threading in C++.

The `parallelReduce` function can be used as a substitute for `parallelReduce` from `RcppParallel`.
It is slightly less efficient for various reasons (in particular it doesn't use a thread pool)
but its code is easy to understand, which was my point.

To experiment with it, put `PoorMansReduce.h` and `PoorMansReduce.cpp` in the `src/` folder, and `PoorMansReduce.r` in the `R/` folder of your R package (edit the R code to insert the name of your package in `.Call` function). In the C++ code, add
```C++
#include "PoorMansReduce.h"
using namespace PoorMansReduce; 
```
and `parallelReduce` can be used as in `RcppParallel`. Note that it doesn't define `RVector`, which can be taken from `RcppParallel` if needed.
