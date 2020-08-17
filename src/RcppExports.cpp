// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clean_text
std::vector<std::string> clean_text(std::vector<std::string> x);
RcppExport SEXP _fastTextR_clean_text(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(clean_text(x));
    return rcpp_result_gen;
END_RCPP
}
// Rft_model_type
std::string Rft_model_type(SEXP ft);
RcppExport SEXP _fastTextR_Rft_model_type(SEXP ftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_model_type(ft));
    return rcpp_result_gen;
END_RCPP
}
// Rft_new_model
SEXP Rft_new_model();
RcppExport SEXP _fastTextR_Rft_new_model() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Rft_new_model());
    return rcpp_result_gen;
END_RCPP
}
// Rft_load_model
SEXP Rft_load_model(std::string file_name);
RcppExport SEXP _fastTextR_Rft_load_model(SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_load_model(file_name));
    return rcpp_result_gen;
END_RCPP
}
// Rft_save_model
SEXP Rft_save_model(SEXP ft, std::string file_name);
RcppExport SEXP _fastTextR_Rft_save_model(SEXP ftSEXP, SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_save_model(ft, file_name));
    return rcpp_result_gen;
END_RCPP
}
// Rft_save_output
SEXP Rft_save_output(SEXP ft, std::string file_name);
RcppExport SEXP _fastTextR_Rft_save_output(SEXP ftSEXP, SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_save_output(ft, file_name));
    return rcpp_result_gen;
END_RCPP
}
// Rft_save_vectors
SEXP Rft_save_vectors(SEXP ft, std::string file_name);
RcppExport SEXP _fastTextR_Rft_save_vectors(SEXP ftSEXP, SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_save_vectors(ft, file_name));
    return rcpp_result_gen;
END_RCPP
}
// Rft_train
SEXP Rft_train(SEXP control);
RcppExport SEXP _fastTextR_Rft_train(SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_train(control));
    return rcpp_result_gen;
END_RCPP
}
// Rft_dict_get_nwords
int Rft_dict_get_nwords(SEXP ft);
RcppExport SEXP _fastTextR_Rft_dict_get_nwords(SEXP ftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_dict_get_nwords(ft));
    return rcpp_result_gen;
END_RCPP
}
// Rft_dict_get_nlabels
int Rft_dict_get_nlabels(SEXP ft);
RcppExport SEXP _fastTextR_Rft_dict_get_nlabels(SEXP ftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_dict_get_nlabels(ft));
    return rcpp_result_gen;
END_RCPP
}
// Rft_dict_get_ntokens
int Rft_dict_get_ntokens(SEXP ft);
RcppExport SEXP _fastTextR_Rft_dict_get_ntokens(SEXP ftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_dict_get_ntokens(ft));
    return rcpp_result_gen;
END_RCPP
}
// Rft_predict_vec
SEXP Rft_predict_vec(SEXP ft, std::vector<std::string> newdata, int32_t k, float threshold);
RcppExport SEXP _fastTextR_Rft_predict_vec(SEXP ftSEXP, SEXP newdataSEXP, SEXP kSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< int32_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< float >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_predict_vec(ft, newdata, k, threshold));
    return rcpp_result_gen;
END_RCPP
}
// Rft_test
SEXP Rft_test(SEXP ft, std::string file_name, int32_t k, float threshold);
RcppExport SEXP _fastTextR_Rft_test(SEXP ftSEXP, SEXP file_nameSEXP, SEXP kSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< int32_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< float >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_test(ft, file_name, k, threshold));
    return rcpp_result_gen;
END_RCPP
}
// Rft_all_words
std::vector<std::string> Rft_all_words(SEXP ft);
RcppExport SEXP _fastTextR_Rft_all_words(SEXP ftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_all_words(ft));
    return rcpp_result_gen;
END_RCPP
}
// Rft_word_vectors
Rcpp::List Rft_word_vectors(SEXP ft, std::vector<std::string> words);
RcppExport SEXP _fastTextR_Rft_word_vectors(SEXP ftSEXP, SEXP wordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type words(wordsSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_word_vectors(ft, words));
    return rcpp_result_gen;
END_RCPP
}
// Rft_nearest_neighbors
Rcpp::NumericVector Rft_nearest_neighbors(SEXP ft, const std::string& word, int32_t k);
RcppExport SEXP _fastTextR_Rft_nearest_neighbors(SEXP ftSEXP, SEXP wordSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type word(wordSEXP);
    Rcpp::traits::input_parameter< int32_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_nearest_neighbors(ft, word, k));
    return rcpp_result_gen;
END_RCPP
}
// Rft_analogies
Rcpp::NumericVector Rft_analogies(SEXP ft, const std::string& wordA, const std::string& wordB, const std::string& wordC, int32_t k);
RcppExport SEXP _fastTextR_Rft_analogies(SEXP ftSEXP, SEXP wordASEXP, SEXP wordBSEXP, SEXP wordCSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type wordA(wordASEXP);
    Rcpp::traits::input_parameter< const std::string& >::type wordB(wordBSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type wordC(wordCSEXP);
    Rcpp::traits::input_parameter< int32_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(Rft_analogies(ft, wordA, wordB, wordC, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastTextR_clean_text", (DL_FUNC) &_fastTextR_clean_text, 1},
    {"_fastTextR_Rft_model_type", (DL_FUNC) &_fastTextR_Rft_model_type, 1},
    {"_fastTextR_Rft_new_model", (DL_FUNC) &_fastTextR_Rft_new_model, 0},
    {"_fastTextR_Rft_load_model", (DL_FUNC) &_fastTextR_Rft_load_model, 1},
    {"_fastTextR_Rft_save_model", (DL_FUNC) &_fastTextR_Rft_save_model, 2},
    {"_fastTextR_Rft_save_output", (DL_FUNC) &_fastTextR_Rft_save_output, 2},
    {"_fastTextR_Rft_save_vectors", (DL_FUNC) &_fastTextR_Rft_save_vectors, 2},
    {"_fastTextR_Rft_train", (DL_FUNC) &_fastTextR_Rft_train, 1},
    {"_fastTextR_Rft_dict_get_nwords", (DL_FUNC) &_fastTextR_Rft_dict_get_nwords, 1},
    {"_fastTextR_Rft_dict_get_nlabels", (DL_FUNC) &_fastTextR_Rft_dict_get_nlabels, 1},
    {"_fastTextR_Rft_dict_get_ntokens", (DL_FUNC) &_fastTextR_Rft_dict_get_ntokens, 1},
    {"_fastTextR_Rft_predict_vec", (DL_FUNC) &_fastTextR_Rft_predict_vec, 4},
    {"_fastTextR_Rft_test", (DL_FUNC) &_fastTextR_Rft_test, 4},
    {"_fastTextR_Rft_all_words", (DL_FUNC) &_fastTextR_Rft_all_words, 1},
    {"_fastTextR_Rft_word_vectors", (DL_FUNC) &_fastTextR_Rft_word_vectors, 2},
    {"_fastTextR_Rft_nearest_neighbors", (DL_FUNC) &_fastTextR_Rft_nearest_neighbors, 3},
    {"_fastTextR_Rft_analogies", (DL_FUNC) &_fastTextR_Rft_analogies, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastTextR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
