#include<stdio.h>

int main(void){
	int i;
	unsigned int num=0;		//������ �޴� ���� 
	char str[]="31415926";
	
	for(i=0;str[i];i=i+1){
		num= num*10+(str[i]-'0');		//���ڿ��� ������ 
	} 
	
	printf("[%s] is %d\n", str, num);
	return 0;
} 


