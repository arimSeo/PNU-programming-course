#include <stdio.h>
int main(void)
{
double x = 0.0;
int i =0;
for (i =0; i <=9; i =i+1)
	x = x+0.1;
if (x == 1.0)
	printf("x is 1.0 \n");
else printf("x is not 1.0 \n",x);

printf("x = %.20f \n", x);
for (x=0.0; x != 1.0; x=x+0.1)
	printf("x = %.20fn", x);
return 0;
}



////삼항연산자1
//#include<stdio.h>
//int main(void){
//	int a=100, b=200;
//	int max;
//
//	max= a>b ? a : b;
//	
////	if(a>b) max=a;
////	else max=b;
//	printf("%d", max);		//답:200 (거짓이라서 b값)
//	
//	return 0;
//} 

////삼항연산자2
//#include<stdio.h>
//int main(void){
//	int a;
//	//관계->논리->>>삼항 
//	//3>4거짓 이므로 &&은 거짓-> 거짓은 뒤에꺼return이니까 3<=4일때는 참이라서 답:1, 
//	//3>4일때는 거짓이니까 답:0 
//
//	a= 3>4 && 3<=4 ? 3>4 : 3<=4;	//답:1  -> 논리연산 참:1 
//	a= 3>4 && 3<=4 ? 3<=4 : 3>4;	//답:0 
//	a= 3>4 && 3<=4 ? 1 : 2;		//2
//	printf("%d", a);	
//	
//	return 0;
//} 


//
//#include <stdio.h>
//int gs=0;
//int sum1(int n){
//	gs=gs+n;
//	return gs;
//}
//int main(void){
//	int s1,s2;
//	s1=sum1(1);
//	s1=sum1(2);
//	s1=sum1(3);
//	
//	printf("sum1=%d", s1);	//답: 6  -전역변수에 대해서는 값이 계속 저장됨. 
//}
//

////2차 배열
//#include<stdio.h>
//int main(void){
//	int a[2][3];
//	
//	printf("%d", sizeof(a));	//2*3 *4 =24바이트 
//	
//	return 0;
//} 
