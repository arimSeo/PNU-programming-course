# 시각화를위한 R 코드작성

install.packages("ggplot2")
library(ggplot2)

setwd("C:/Users/USER/Desktop/3학년 2학기/데이터마이닝/R 실습")

#Data loading
#housing 변수
data.housing <-read.csv("BostonHousing.csv")
summary(data.housing)

names(data.housing)[14] <-c("CAT.MEDV")   #테이블 변수이름 바꾸기
# $: ~찾기 / as.factor:범주=형으로 
data.housing$CAT.MEDV <- as.factor(data.housing$CAT.MEDV)
#######Data Visualization

#1. Simple bar chart
count <- table(data.housing$CHAS)
barplot(count)   #plots에 bar그래프 나옴

#barplot using ggplot2
count.df <- as.data.frame(count)
total <- 0
for(i in 1:length(count.df[,2])) total <-total+count.df[i,2]
#total <- nrow(data.housing)

new_col <- data.frame(ratio=c(count.df[,2]/total))
count.df <- cbind(count.df, new_col)

#aes: 데이터 매핑하고자 하는 스케일 (x축, y축, 색깔 등), '심미적・미학적'이라는 뜻
p <-ggplot(data=count.df, aes(x=Var1, y=ratio)) 
p + geom_bar(stat="identity")+ xlab('CHAT')+ylab('% of CAT.MEDV')
#CAT.MEDV:집값 높고낮음

#Scatter plot
plot (data.housing$LSTAT, data.housing$MEDV, xlab="MEDV",ylab="LSTAT")
  #ggplot 이용하면,
ggplot(data=data.housing, aes(x=LSTAT, y=MEDV, color=CAT.MEDV)) +geom_point()


#Histogram, Boxplot, Heatmap, Matrixplot ->스스로 그려봐라

#Amtrack passenger data aggregation

am_data <- read.csv("Amtrak.csv")
#테이블 속성 이름바꿔주기
names(am_data)[1] <-"date"
names(am_data)[2] <-"passenger"

#데이터 쪼게기(date의 날짜를 /로 쪼갬)
x <- NULL
x <- gsub("/"," ", am_data$date)
x <- strsplit(x, " ")
x <- t(matrix(unlist(x), 3, 159)) #3개로분할 ,총159개 열

#위 x를 프레임으로 각각 일/월/년 3개로 나눠 넣기.
x_frame <- data.frame(x)
names(x_frame)[1] <- "day"
names(x_frame)[2] <- "month"
names(x_frame)[3] <- "year"

install.packages("Rcpp")
#sql문 쓸수있게하는 패키지. 
install.packages("sqldf")
library(sqldf)


#Merge data--- cbind: (,)안 데이터 합치기
amtrak_data <- cbind(am_data, x_frame)
  #월별로 데이처합치기
am_month_traffic <- sqldf("select month, passenger from amtrak_data group by month")
  #년도별 데이터 합치기 ---해보거라
####

#위 데이터로 plot그리기
g <- ggplot(data=am_month_traffic, aes(x=am_month_traffic$month, y=am_month_traffic$passenger,group=1)) 
g+geom_line()



