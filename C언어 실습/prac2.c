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



////���׿�����1
//#include<stdio.h>
//int main(void){
//	int a=100, b=200;
//	int max;
//
//	max= a>b ? a : b;
//	
////	if(a>b) max=a;
////	else max=b;
//	printf("%d", max);		//��:200 (�����̶� b��)
//	
//	return 0;
//} 

////���׿�����2
//#include<stdio.h>
//int main(void){
//	int a;
//	//����->��->>>���� 
//	//3>4���� �̹Ƿ� &&�� ����-> ������ �ڿ���return�̴ϱ� 3<=4�϶��� ���̶� ��:1, 
//	//3>4�϶��� �����̴ϱ� ��:0 
//
//	a= 3>4 && 3<=4 ? 3>4 : 3<=4;	//��:1  -> ������ ��:1 
//	a= 3>4 && 3<=4 ? 3<=4 : 3>4;	//��:0 
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
//	printf("sum1=%d", s1);	//��: 6  -���������� ���ؼ��� ���� ��� �����. 
//}
//

////2�� �迭
//#include<stdio.h>
//int main(void){
//	int a[2][3];
//	
//	printf("%d", sizeof(a));	//2*3 *4 =24����Ʈ 
//	
//	return 0;
//} 
