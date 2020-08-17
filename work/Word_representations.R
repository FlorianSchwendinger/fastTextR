library("fastTextR")

setwd("~/data")

ft <- fasttext()
ft$train('fil9', method = "cbow", control = ft_control(), nthreads=3L, verbose=2L)
write.fasttext(model, "fil9.bin", what = "model")



q("no")
R

library("fastTextR")

ft <- fasttext()
ft$load("cc.en.300.bin")
ft$word_vectors("enviroment")
ft$word_vectors(c("asparagus", "pidgey", "yellow"))

ft$fnearest_neighbors('asparagus')




