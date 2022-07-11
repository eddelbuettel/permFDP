// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// designTTest
double designTTest(std::vector<double> ints, std::vector<int> design);
RcppExport SEXP _permFDP_designTTest(SEXP intsSEXP, SEXP designSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type ints(intsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type design(designSEXP);
    rcpp_result_gen = Rcpp::wrap(designTTest(ints, design));
    return rcpp_result_gen;
END_RCPP
}
// permFDRAdjust
double permFDRAdjust(std::vector<double> expPs, double threshold, std::vector<int> design, std::vector<std::vector<double>> intOnly, int nPerms, int nc, int nt);
RcppExport SEXP _permFDP_permFDRAdjust(SEXP expPsSEXP, SEXP thresholdSEXP, SEXP designSEXP, SEXP intOnlySEXP, SEXP nPermsSEXP, SEXP ncSEXP, SEXP ntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type expPs(expPsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type design(designSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<double>> >::type intOnly(intOnlySEXP);
    Rcpp::traits::input_parameter< int >::type nPerms(nPermsSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    rcpp_result_gen = Rcpp::wrap(permFDRAdjust(expPs, threshold, design, intOnly, nPerms, nc, nt));
    return rcpp_result_gen;
END_RCPP
}
// permFDRAdjustCpp
double permFDRAdjustCpp(Rcpp::NumericVector expPs, double threshold, Rcpp::NumericVector design, Rcpp::NumericMatrix intMatrix, int nPerms, int nc, int nt);
RcppExport SEXP _permFDP_permFDRAdjustCpp(SEXP expPsSEXP, SEXP thresholdSEXP, SEXP designSEXP, SEXP intMatrixSEXP, SEXP nPermsSEXP, SEXP ncSEXP, SEXP ntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type expPs(expPsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type design(designSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type intMatrix(intMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type nPerms(nPermsSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< int >::type nt(ntSEXP);
    rcpp_result_gen = Rcpp::wrap(permFDRAdjustCpp(expPs, threshold, design, intMatrix, nPerms, nc, nt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _permFDP_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_permFDP_designTTest", (DL_FUNC) &_permFDP_designTTest, 2},
    {"_permFDP_permFDRAdjust", (DL_FUNC) &_permFDP_permFDRAdjust, 7},
    {"_permFDP_permFDRAdjustCpp", (DL_FUNC) &_permFDP_permFDRAdjustCpp, 7},
    {"_permFDP_rcpp_hello_world", (DL_FUNC) &_permFDP_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_permFDP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
