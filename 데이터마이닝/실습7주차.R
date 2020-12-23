#k-NN

setwd("C:/Users/USER/Desktop/3학년 2학기/데이터마이닝/R 실습")
mower.df <- read.csv("RidingMowers.csv")

set.seed(111)
train.index <- sample(row.names(mower.df),0.6*dim(mower.df)[1])
valid.index <- setdiff(row.names(mower.df), train.index)
train.df <- mower.df[train.index,]
valid.df <- mower.df[train.index,]

new.df <- data.frame(Income=60, Lot_Size=20)

#scatter plot
plot(Lot_Size ~ Income, data=train.df, pch =ifelse(train.df$Ownership=="Owner",1,3))
text(train.df$Income, train.df$Lot_Size, rownames(train.df), pos=4)
text(60,20,"x")  #알고싶은 위치
legend("topright", c("owner","non_owner","newhousehold"), pch=c(1,3,4))

#normalized training
train.norm.df <- train.df
valid.norm.df <- valid.df
mower.norm.df <- mower.df

install.packages("caret")
library(caret)  #안됨 ㅠ

norm.values <- preProcess(train.df[,1:2], method=c("center","scale"))




