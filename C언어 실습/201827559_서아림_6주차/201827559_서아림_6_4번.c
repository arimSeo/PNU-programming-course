#include<stdio.h>

int main(void){
	int i;
	unsigned int num=0;		//정수로 받는 변수 
	char str[]="31415926";
	
	for(i=0;str[i];i=i+1){
		num= num*10+(str[i]-'0');		//문자열을 정수로 
	} 
	
	printf("[%s] is %d\n", str, num);
	return 0;
} 


