#include <stdio.h>
int is_digit(char ch) {
	return (ch >=0x30 && ch<=0x39);
}

int main(void){
	int i;
	int sum=0;
	char str[]="b234,56a,1";	//'\o'포함 
	
	for(i=0;str[i];i=i+1){
		if(is_digit(str[i])){		//10진수인거만 sum으로 계산. 
			sum=sum+(str[i]-'0') ; 
		}
	}
	printf("Sum of all digits in");
	printf("[%s]: %d\n", str, sum);

	return 0;
}


