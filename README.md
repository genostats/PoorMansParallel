# PoorMansReduce

This is an experiment to understand multi threading in C++.

The parallelReduce function  can be used as a substitute for parallelReduce from RcppParallel.
It is slightly less efficient for various reasons (in particular it doesn't use a thread pool)
but its code is easy to understand, which was my point.
