
<!-- README.md is generated from README.Rmd. Please edit that file -->

# rngex

<!-- badges: start -->

<!-- badges: end -->

The goal of rngex is to show example random number generation with
RcppArmadillo.

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(rngex)
```

## Without setting seed

``` r
ranmat(4)
#>             [,1]        [,2]        [,3]       [,4]
#> [1,] -0.70316880  0.15897838  0.51290689 -0.9583847
#> [2,] -1.23373314 -0.05383881  1.09161915 -1.2168741
#> [3,] -0.02448067 -1.64436137  0.06313345 -0.5997956
#> [4,]  0.25975276 -0.49657983 -0.35975176  0.5928919

ranmat(4)
#>            [,1]       [,2]       [,3]        [,4]
#> [1,] -0.6962268 -0.4942935 -0.5604681  1.17184849
#> [2,]  1.0853809  0.9545780 -2.0735860  0.06339389
#> [3,] -2.4345009  0.4729225  0.8693745 -0.91459065
#> [4,] -1.0933627 -1.7419774 -1.1090595 -0.57076634

ranmat(4)
#>            [,1]        [,2]       [,3]       [,4]
#> [1,]  0.9383297 -0.33199974 -0.9434110  0.7221000
#> [2,]  0.1720181 -0.01665897 -0.1993004  0.1151309
#> [3,] -0.3361299 -0.65101121 -0.4604494 -0.1408955
#> [4,] -1.4126417 -0.15791439 -0.2227641  1.3694862
```

## With setting seed

``` r
set.seed(33212)
ranmat(4)
#>            [,1]       [,2]        [,3]        [,4]
#> [1,] -0.5718445  1.5874945  0.07825246 -0.02052529
#> [2,] -1.5024390  1.0639790  1.15692404  0.55064120
#> [3,]  0.7389139  0.8592115 -0.13330708 -1.53026580
#> [4,] -1.0998077 -0.2625793  1.91229562  1.23546658

set.seed(33212)
ranmat(4)
#>            [,1]       [,2]        [,3]        [,4]
#> [1,] -0.5718445  1.5874945  0.07825246 -0.02052529
#> [2,] -1.5024390  1.0639790  1.15692404  0.55064120
#> [3,]  0.7389139  0.8592115 -0.13330708 -1.53026580
#> [4,] -1.0998077 -0.2625793  1.91229562  1.23546658

set.seed(33212)
ranmat(4)
#>            [,1]       [,2]        [,3]        [,4]
#> [1,] -0.5718445  1.5874945  0.07825246 -0.02052529
#> [2,] -1.5024390  1.0639790  1.15692404  0.55064120
#> [3,]  0.7389139  0.8592115 -0.13330708 -1.53026580
#> [4,] -1.0998077 -0.2625793  1.91229562  1.23546658
```
