#include<stdio.h>

void mystrcpy(char dest[], char src[]){
	int i=0, j=0;
	while (src[i]){
		dest[j++] =src[i++];
	dest[j] = '\0';
	}
}

void mystrcpy2(char *dest, char *src){
	//enter your code here
	while(*src){
		*dest++ = *src++;
	*dest='\0';
	}	
}

int main(void){
	char mystr1[256];
	char mystr2[256];
	char mystr3[256];
	
	gets(mystr1);
	mystrcpy(mystr2,mystr1);
	puts(mystr2);
	mystrcpy2(mystr3, mystr1);
	puts(mystr3);
	
	return 0;
}



