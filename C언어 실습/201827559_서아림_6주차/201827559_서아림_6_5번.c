#include<stdio.h>
int main(void){
	int i;
	unsigned int num;
	unsigned int nd;
	char str[11];
	char rstr[11];
	
	scanf("%d", &num);
	for(i=0, nd=num; nd>0; i++,nd=nd/10){
		rstr[i] = nd%10 +'0';		//정수를 믄자열로 
	} 
	
	int len =i;
	for(i=0; i<11 ; i++)
		str[i]=rstr[len-i-1];
	str[i]='\0';
	printf("%d is [%s]\n", num, str);
	return 0;
	
}



