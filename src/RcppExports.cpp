// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// url_decode
std::vector < std::string > url_decode(std::vector < std::string > urls);
RcppExport SEXP urltools_url_decode(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        std::vector < std::string > __result = url_decode(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// url_encode
std::vector < std::string > url_encode(std::vector < std::string > urls);
RcppExport SEXP urltools_url_encode(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        std::vector < std::string > __result = url_encode(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// url_parse
std::list < std::vector < std::string > > url_parse(std::vector < std::string > urls, bool normalise = true);
RcppExport SEXP urltools_url_parse(SEXP urlsSEXP, SEXP normaliseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        Rcpp::traits::input_parameter< bool >::type normalise(normaliseSEXP );
        std::list < std::vector < std::string > > __result = url_parse(urls, normalise);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_parameter
std::vector < std::string > extract_parameter(std::vector < std::string > urls, std::string parameter);
RcppExport SEXP urltools_extract_parameter(SEXP urlsSEXP, SEXP parameterSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        Rcpp::traits::input_parameter< std::string >::type parameter(parameterSEXP );
        std::vector < std::string > __result = extract_parameter(urls, parameter);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// replace_parameter
std::vector < std::string > replace_parameter(std::vector < std::string > urls, std::string parameter, std::string new_value);
RcppExport SEXP urltools_replace_parameter(SEXP urlsSEXP, SEXP parameterSEXP, SEXP new_valueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        Rcpp::traits::input_parameter< std::string >::type parameter(parameterSEXP );
        Rcpp::traits::input_parameter< std::string >::type new_value(new_valueSEXP );
        std::vector < std::string > __result = replace_parameter(urls, parameter, new_value);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_host
std::vector < std::string > extract_host(std::vector < std::string > urls);
RcppExport SEXP urltools_extract_host(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        std::vector < std::string > __result = extract_host(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
