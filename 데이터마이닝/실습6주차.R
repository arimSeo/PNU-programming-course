#clustering

setwd("C:/Users/USER/Desktop/3학년 2학기/데이터마이닝/R 실습")
utilities.df <-read.csv("utilities.csv")

#set row names
row.names(utilities.df) <- utilities.df[,1]  #1열에있던 data들 이름으로 좌측속성 바꿔줌.
utilities.df <- utilities.df[,-1]   #1열 빠짐

#compute euclidean distance
d <-dist(utilities.df, method ="euclidean")

utilities.df.norm <- sapply(utilities.df, scale)  #sapply: for문 같은 함수
#scale함수 : normalize함
row.names(utilities.df.norm) <- row.names(utilities.df)

d.norm <-dist(utilities.df.norm, method ="euclidean")
d.norm

#Hierarchical clustering
hc1 <-hclust(d.norm, method="single")
plot(hc1, hang=-1, ann=FALSE)
hc2 <-hclust(d.norm, method="average")
plot(hc2, hang=-1, ann=FALSE)

memb <- cutree(hc1, k=6)
memb

km <- kmeans(utilities.df.norm, 6)
km
km$cluster
km$centers  #centroid



