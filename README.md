# PoorMansReduce

This is an experiment to understand multi threading in C++.

The `parallelReduce` and `parallelFor` functions can be used as a substitute for their counterparts from `RcppParallel`.
It is slightly less efficient for various reasons (in particular it doesn't use a thread pool, which results in an overhead of around 0.1 milliseconds) but its code is easy (our should be) to understand, which was my point.

To experiment with it, put `PoorMansReduce.h` and `PoorMansReduce.cpp` in the `src/` folder, and `PoorMansReduce.r` in the `R/` folder of your R package (edit the R code to insert the name of your package in `.Call` function). In the C++ code, add
```C++
#include "PoorMansReduce.h"
using namespace PoorMansReduce; 
```
and `parallelReduce` `parallelFor` can be used as in `RcppParallel`. Note that `RVector` is not defined, its definition can easily be taken from `RcppParallel` if needed.
