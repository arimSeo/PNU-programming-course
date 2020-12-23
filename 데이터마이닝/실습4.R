#Regression

install.packages("ggplot2")
library(ggplot2)

setwd("C:/Users/USER/Desktop/3학년 2학기/데이터마이닝/R 실습")

#Read data
data.toyota <- read.csv("ToyotaCorolla.csv")
data.toyota <-na.omit(data.toyota)     #null값 없애기

data.toyota$CC <- as.numeric(data.toyota$CC)

#correlation 상관분석: cor()
data.toyota.wochr <- data.toyota[,c("Price","Age_08_04","KM","HP","Automatic","CC","Doors","Quarterly_Tax","Weight")]
cor_matrix <- round(cor(data.toyota.wochr),2)
cor_matrix[upper.tri(cor_matrix)] <-NA #대칭되서 중복되는 upper(윗부분)값 NA로 숨기기

#reshape: 데이터 프레임의 모양을 바꾸는 패키지 
install.packages("reshape2")
library(reshape2)
#########library 에러뜸 ...ㅠㅠㅠ

#melt() :위 matix형태를 list형태로 바꿈
cor_matrix_melt <- melt(cor_matrix)
g <- ggplot(data=cor_matrix_melt, aes(x=Var1, y=Var2, fill=value)) +geom_tilte()+geom_text(aes(label=value))
g     #heat map나옴.

ggplot(data=data.toyota.wochr, aes(x=Age_08_04, y=price)) +geom()



