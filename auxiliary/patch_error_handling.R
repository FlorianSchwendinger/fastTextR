# This file is used to modify the C++ source such that the C++ error handling
# is replaced by R error handling.

files <- dir("../src", pattern = ".cc", full.names = TRUE)
file <- "../src/fasttext.cc"

identify_error_functions <- function(files) {
    x <- unlist(lapply(files, readLines))
    x <- grep("throw\\s+std", x, value = TRUE)
    table(trimws(gsub("(\\(.*|.*throw.*std::)", "", x)))
}

identify_error_functions(files)

for (file in files) {
    x <- readLines(file)
    if (any(grepl("throw\\s+std", x))) {
        x <- gsub("throw\\s+std.*?\\(", "Rcpp::stop(", x)
        writeLines(x, file)
    }
}

