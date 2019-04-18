// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rray.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// rray_ones_cpp
SEXP rray_ones_cpp(const std::vector<std::size_t>& shape);
RcppExport SEXP _rray_rray_ones_cpp(SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t>& >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_ones_cpp(shape));
    return rcpp_result_gen;
END_RCPP
}
// rray_zeros_cpp
SEXP rray_zeros_cpp(const std::vector<std::size_t>& shape);
RcppExport SEXP _rray_rray_zeros_cpp(SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t>& >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_zeros_cpp(shape));
    return rcpp_result_gen;
END_RCPP
}
// rray_eye_cpp
SEXP rray_eye_cpp(const std::vector<std::size_t> shape, int k);
RcppExport SEXP _rray_rray_eye_cpp(SEXP shapeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t> >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_eye_cpp(shape, k));
    return rcpp_result_gen;
END_RCPP
}
// rray_eye_square_cpp
SEXP rray_eye_square_cpp(std::size_t n, int k);
RcppExport SEXP _rray_rray_eye_square_cpp(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_eye_square_cpp(n, k));
    return rcpp_result_gen;
END_RCPP
}
// rray_dim
Rcpp::IntegerVector rray_dim(Rcpp::RObject x);
static SEXP _rray_rray_dim_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_dim(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _rray_rray_dim(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_rray_rray_dim_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rray_op_binary_cpp
SEXP rray_op_binary_cpp(const std::string& op, SEXP x, SEXP y);
RcppExport SEXP _rray_rray_op_binary_cpp(SEXP opSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_binary_cpp(op, x, y));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_trinary_cpp
SEXP rray_op_trinary_cpp(const std::string& op, SEXP x, SEXP y, SEXP z);
RcppExport SEXP _rray_rray_op_trinary_cpp(SEXP opSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_trinary_cpp(op, x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_one_cpp
SEXP rray_op_unary_one_cpp(std::string op, SEXP x, SEXP arg);
RcppExport SEXP _rray_rray_op_unary_one_cpp(SEXP opSEXP, SEXP xSEXP, SEXP argSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg(argSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_one_cpp(op, x, arg));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_three_cpp
SEXP rray_op_unary_three_cpp(std::string op, SEXP x, SEXP arg1, SEXP arg2, SEXP arg3);
RcppExport SEXP _rray_rray_op_unary_three_cpp(SEXP opSEXP, SEXP xSEXP, SEXP arg1SEXP, SEXP arg2SEXP, SEXP arg3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg1(arg1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg2(arg2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg3(arg3SEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_three_cpp(op, x, arg1, arg2, arg3));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_two_cpp
SEXP rray_op_unary_two_cpp(std::string op, SEXP x, SEXP arg1, SEXP arg2);
RcppExport SEXP _rray_rray_op_unary_two_cpp(SEXP opSEXP, SEXP xSEXP, SEXP arg1SEXP, SEXP arg2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg1(arg1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg2(arg2SEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_two_cpp(op, x, arg1, arg2));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_cpp
SEXP rray_op_unary_cpp(std::string op, SEXP x);
RcppExport SEXP _rray_rray_op_unary_cpp(SEXP opSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_cpp(op, x));
    return rcpp_result_gen;
END_RCPP
}
// rray_reducer_cpp
SEXP rray_reducer_cpp(std::string op, SEXP x, SEXP axes);
RcppExport SEXP _rray_rray_reducer_cpp(SEXP opSEXP, SEXP xSEXP, SEXP axesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type axes(axesSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_reducer_cpp(op, x, axes));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _rray_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::IntegerVector(*rray_dim)(Rcpp::RObject)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _rray_RcppExport_registerCCallable() { 
    R_RegisterCCallable("rray", "_rray_rray_dim", (DL_FUNC)_rray_rray_dim_try);
    R_RegisterCCallable("rray", "_rray_RcppExport_validate", (DL_FUNC)_rray_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_rray_rray_ones_cpp", (DL_FUNC) &_rray_rray_ones_cpp, 1},
    {"_rray_rray_zeros_cpp", (DL_FUNC) &_rray_rray_zeros_cpp, 1},
    {"_rray_rray_eye_cpp", (DL_FUNC) &_rray_rray_eye_cpp, 2},
    {"_rray_rray_eye_square_cpp", (DL_FUNC) &_rray_rray_eye_square_cpp, 2},
    {"_rray_rray_dim", (DL_FUNC) &_rray_rray_dim, 1},
    {"_rray_rray_op_binary_cpp", (DL_FUNC) &_rray_rray_op_binary_cpp, 3},
    {"_rray_rray_op_trinary_cpp", (DL_FUNC) &_rray_rray_op_trinary_cpp, 4},
    {"_rray_rray_op_unary_one_cpp", (DL_FUNC) &_rray_rray_op_unary_one_cpp, 3},
    {"_rray_rray_op_unary_three_cpp", (DL_FUNC) &_rray_rray_op_unary_three_cpp, 5},
    {"_rray_rray_op_unary_two_cpp", (DL_FUNC) &_rray_rray_op_unary_two_cpp, 4},
    {"_rray_rray_op_unary_cpp", (DL_FUNC) &_rray_rray_op_unary_cpp, 2},
    {"_rray_rray_reducer_cpp", (DL_FUNC) &_rray_rray_reducer_cpp, 3},
    {"_rray_RcppExport_registerCCallable", (DL_FUNC) &_rray_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rray(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
