
update_src:
	rsync -av code/fastText/src/* fastTextR/src/

docs:
	R -e "library(roxygen2); roxygenise(package.dir='fastTextR', roclets=c('rd'))"

compile_attributes:
	R -e "setwd('fastTextR'); Rcpp:::compileAttributes()"

build: compile_attributes
	R CMD build fastTextR

build_no_vignettes: compile_attributes
	R CMD build --no-build-vignettes fastTextR

inst: build_no_vignettes
	R CMD INSTALL fastTextR_*.tar.gz

check: build
	R CMD check fastTextR_*.tar.gz

check_all.fasttext: docs compile_attributes build
	R CMD check fastTextR_*.tar.gz \\
	cp fastTextR.Rcheck/fastTextR-manual.pdf fastTextR-manual.pdf
