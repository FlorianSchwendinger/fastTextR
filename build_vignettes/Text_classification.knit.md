---
title: fastTextR - Text Classification
output: html_document
vignette: >
  %\VignetteIndexEntry{Text_Classification}
  %\VignetteEngine{knitr::rmarkdown}
  \usepackage[utf8]{inputenc}
---

**fastTextR** is an **R** interface to the [fastText](https://github.com/facebookresearch/fastText)
library. It can be used to **word representation learning** *(Bojanowski et al., 2016)* and 
**supervised text classification** *(Joulin et al., 2016)*.
Particularly the advantage of **fastText** to other software is that, 
it was designed for biggish data.

The following example is based on the examples provided in the **fastText** library, 
the example shows how to use **fastTextR** text classification.

## Download Data    

```r
options(width=100L)
fn <- "dbpedia_csv.tar.gz"

if ( !file.exists(fn) ) {
    download.file("https://github.com/le-scientifique/torchDatasets/raw/master/dbpedia_csv.tar.gz",
                  fn)
    untar(fn)
}
```

## Normalize Data
In **fastText** labels are typically marked with `__label__1` to `__label__k`.
Since **fastText** relies at the order of the trainings data it is important
to ensure the order of the trainings data follows no particular pattern
(which is done here with `sample`). The function `normalize` mimics
the data preparation steps of the bash function `normalize_text`
as shown in 
[classification-example.sh](https://github.com/facebookresearch/fastText/blob/master/classification-example.sh).


```r
library("fastTextR")

train <- sample(sprintf("__label__%s", readLines("dbpedia_csv/train.csv")))
head(train, 2)
```

```
## [1] "__label__5,\"Helmut Haussmann\",\" Helmut Haussmann (born 18 May 1943) is a German academic and politician. He served as minister of economy from 1988 to 1991.\""                                                                                                                                                                              
## [2] "__label__9,\"Studzianki Rawa County\",\" Studzianki [stuˈd͡ʑaŋki] is a village in the administrative district of Gmina Sadkowice within Rawa County Łódź Voivodeship in central Poland. It lies approximately 5 kilometres (3 mi) west of Sadkowice 16 km (10 mi) east of Rawa Mazowiecka and 69 km (43 mi) east of the regional capital Łódź.\""
```

```r
train <- ft_normalize(train)
writeLines(train, con = "dbpedia.train")

test <- readLines("dbpedia_csv/test.csv")
labels <- trimws(gsub(",.*", "", test))
table(labels)
```

```
## labels
##    1   10   11   12   13   14    2    3    4    5    6    7    8    9 
## 5000 5000 5000 5000 5000 5000 5000 5000 5000 5000 5000 5000 5000 5000
```

```r
test <- ft_normalize(test)
test <- trimws(sub(".*?,", "", test))
head(test, 2)
```

```
## [1] "\" TY KU \" , \" TY KU /taɪkuː/ is an American alcoholic beverage company that specializes in sake and other spirits . The privately-held company was founded in 2004 and is headquartered in New York City New York . While based in New York TY KU ' s beverages are made in Japan through a joint venture with two sake breweries . Since 2011 TY KU ' s growth has extended its products into all 50 states . \""                                        
## [2] "\" Odd Lot Entertainment \" , \" OddLot Entertainment founded in 2001 by longtime producers Gigi Pritzker and Deborah Del Prete ( The Wedding Planner ) is a film production and financing company based in Culver City California . OddLot produced the film version of Orson Scott Card ' s sci-fi novel Ender ' s Game . A film version of this novel had been in the works in one form or another for more than a decade by the time of its release . \""
```

## Train Model
After the data preparation the model can be trained and is saved to 
the file `"dbpedia.bin"`.

```r
cntrl <- ft_control(word_vec_size = 10L, learning_rate = 0.1, max_len_ngram = 2L, 
                    min_count = 1L, nbuckets = 10000000L, epoch = 5L, nthreads = 4L)

model <- ft_train(file = "dbpedia.train", method = "supervised", control = cntrl)
ft_save(model, "dbpedia.bin")
```

## Read Model
A previously trained model can be loaded via the function `read.fasttext`.

```r
model <- ft_load("dbpedia.bin")
```

## Predict / Test Model
To perform prediction the function `predict` can be used.

```r
test_pred <- ft_predict(model, newdata=test, k = 1L)
str(test_pred)
```

```
## 'data.frame':	70000 obs. of  3 variables:
##  $ id   : int  1 2 3 4 5 6 7 8 9 10 ...
##  $ label: chr  "__label__1" "__label__1" "__label__1" "__label__1" ...
##  $ prob : num  1 0.72 0.999 0.998 0.993 ...
```

```r
confusion_matrix <- table(truth=as.integer(labels), 
                          predicted=as.integer(gsub("\\D", "", test_pred$label)))
print(confusion_matrix)
```

```
##      predicted
## truth    1    2    3    4    5    6    7    8    9   10   11   12   13   14
##    1  4734   45   13    6   12   50   60    1    2    4    6   12    7   48
##    2    41 4912    1    1    2    0   32    3    1    0    1    0    0    6
##    3    16    2 4817   15   74    0    5    1    0    0    0   23   11   36
##    4     2    1   29 4947   15    3    0    0    0    2    0    0    1    0
##    5     7    5   70   11 4896    3    3    0    1    1    0    0    0    3
##    6    34    1    1    1    3 4936   12    5    0    0    0    2    3    2
##    7    59   31    1    1    6   17 4839   26    8    0    0    1    1   10
##    8     3    1    0    0    1    2   28 4944   16    2    2    0    0    1
##    9     1    1    0    0    2    0   10   17 4967    0    1    1    0    0
##    10    3    0    0    1    0    0    0    5    0 4952   37    1    0    1
##    11   17    1    0    0    0    1    0    2    0   32 4945    1    0    1
##    12    7    0   18    1    0    4    0    0    0    0    0 4937   21   12
##    13    7    1    8    0    0    2    3    1    0    0    0   18 4926   34
##    14   44    7   25    1    2    5    7    3    1    2    1    5   34 4863
```

```r
accuracy <- sum(diag(confusion_matrix)) / sum(confusion_matrix)
print(sprintf("Accuracy: %0.4f", accuracy))
```

```
## [1] "Accuracy: 0.9802"
```


## References

[1] P. Bojanowski, E. Grave, A. Joulin, T. Mikolov, [*Enriching Word Vectors with Subword Information*](https://arxiv.org/abs/1607.04606)

```
@article{bojanowski2016enriching,
  title={Enriching Word Vectors with Subword Information},
  author={Bojanowski, Piotr and Grave, Edouard and Joulin, Armand and Mikolov, Tomas},
  journal={arXiv preprint arXiv:1607.04606},
  year={2016}
}
```

[2] A. Joulin, E. Grave, P. Bojanowski, T. Mikolov, [*Bag of Tricks for Efficient Text Classification*](https://arxiv.org/abs/1607.01759)

```
@article{joulin2016bag,
  title={Bag of Tricks for Efficient Text Classification},
  author={Joulin, Armand and Grave, Edouard and Bojanowski, Piotr and Mikolov, Tomas},
  journal={arXiv preprint arXiv:1607.01759},
  year={2016}
}
```
