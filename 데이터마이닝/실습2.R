  #2. PCA 주성분 분석

setwd("C:/Users/USER/Desktop/3학년 2학기/데이터마이닝/R 실습")

cereals_data<- read.csv("Cereals.csv")
housing_data <-read.csv("BostonHousing.csv")

#pivot table
count <- table(housing_data$CHAS)   #각데이터 종류의 개수를 테이블형태로

install.packages("rpivotTable")
library(rpivotTable)
rpivotTable(housing_data, rows="CHAS", vals="MEDV",aggregatorName = "Average")

f1 <-floor(housing_data$RM)
cl <-f1+1

rg<-paste(as.character(f1),"-", as.character(cl))
data.housing <- cbind(housing_data,rg)
names(data.housing)[15] <-"RM_Range"    #data이름 바꾸기
rpivotTable(data.housing, rows="RM_Range", cols="CHAS",vals="MEDV", aggregatorName="Average")

#Cov matrix
var(cereals_data$rating)
cor(cereals_data$calories, cereals_data$rating)
cv_cereals <- cov(cereals_data[,c("calories","rating")])
cv_cereals

#PCA -> 수치형 아닌건 빼기.
c_data4PCA <-cereals_data[,-c(1:3)] #1열~3열 제외하기
c_data4PCA <-na.omit(c_data4PCA)  #null 값 데이터 삭제
c_PCA <- prcomp(c_data4PCA)   #PCA 돌리기(결과)
summary(c_PCA)

#Normalization
normalize <- function(x) {
  return ((x-mean(x))/sd(x))
}
c_data4PCA_nor <- as.data.frame(lapply(c_data4PCA, normalize)) #lapply():()데이터를 반복적으로 적용하겠다
c_PCA_nor <- prcomp(c_data4PCA_nor)
summary(c_PCA_nor)

#check PC
df_PCA <- as.data.frame(c_PCA_nor$x)
cv_pca <-cov(df_PCA[,c(1:2)])
cv_pca
cr_PCA <- round(cor(df_PCA[,c(1:2)]),2)   #round: 반올림
cr_PCA
