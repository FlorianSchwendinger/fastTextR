x <- readLines('Text_classification.knit.md')
x <- gsub('```r', '```{r, eval=FALSE}', x)
writeLines(x, '../fastTextR/vignettes/Text_classification.Rmd')

x <- readLines('Word_representations.knit.md')
x <- gsub('```r', '```{r, eval=FALSE}', x)
writeLines(x, '../fastTextR/vignettes/Word_representations.Rmd')
