#include<stdio.h>

int ispalindrome(char *str, int len){
	int i;
	int count=0;

	for(i=0;i<len/2; i++){	
		if(str[i]==str[len-i-1]){
			count++;
		}
		else{
			printf(" not a palindrome");
			break;
		}
	}
	if(count==len/2){
		printf(" a palindrome");
	}
}

int leng(char* ptr){
	int leng = 0;
//null문자를 만날때까지 반복
	while (ptr[leng] != '\0')
		leng++;
	return leng;
}

int main(void){
	char buffer[1024];
	int length;
	
	gets(buffer);
	printf("[%s] is", buffer);
	length= leng(buffer);
	ispalindrome(buffer,length);
	
	return 0;
}
