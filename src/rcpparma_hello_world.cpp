// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

// we only include RcppArmadillo.h which pulls Rcpp.h in for us
#include "RcppArmadillo.h"

// via the depends attribute we tell Rcpp to create hooks for
// RcppArmadillo so that the build process will know what to do
//
// [[Rcpp::depends(RcppArmadillo)]]

// simple example of creating two matrices and
// returning the result of an operatioon on them
//
// via the exports attribute we tell Rcpp to make this function
// available from R
//

// [[Rcpp::export]]
Rcpp::List ranmat(Rcpp::NumericVector n) {
    arma::mat X1 = arma::randn<arma::mat>(n[0],n[0]);
    arma::mat X2 = arma::randn<arma::mat>(n[0],n[0]);
    Rcpp::List ans;
    ans["x1"] = X1;
    ans["x2"] = X2;
    return(ans);
}

