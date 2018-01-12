#include "PoorMansReduce.h"

namespace PoorMansReduce {
  // access to n
  unsigned int nb_threads() {
    return n;
  }

  void set_nb_threads(unsigned int nb) {
    n = nb;
  }
}

int _get_nb_threads() {
  // return std::thread::hardware_concurrency();
  return PoorMansReduce::nb_threads();
}

void _set_nb_threads(int n) {
  PoorMansReduce::set_nb_threads(n);
}
 
RcppExport SEXP get_nb_threads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(_get_nb_threads());
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP set_nb_threads(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    _set_nb_threads(n);
    return R_NilValue;
END_RCPP
}

