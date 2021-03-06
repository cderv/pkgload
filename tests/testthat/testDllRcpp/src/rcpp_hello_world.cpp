#include <Rcpp.h>

// [[Rcpp::export]]
SEXP rcpp_hello_world() {
  using namespace Rcpp;

  CharacterVector x = CharacterVector::create("foo", "bar");
  NumericVector y = NumericVector::create(0.0, 1.0);
  List z = List::create(x, y);

  return z;
}

// [[Rcpp::export]]
bool rcpp_test_attributes() { return true; }
