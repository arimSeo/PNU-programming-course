#include <stdio.h>

int mystrcmp(char *lhs, char *rhs){
	
	return (*lhs-*rhs);
}

int main(void){
	char mystr1[256];
	char mystr2[256];
	gets(mystr1);
	gets(mystr2);
	
	if (mystrcmp(mystr1, mystr2)==0)
		puts("2 strings are equal");
	else puts("2 strings are different");
	
	return 0;
	
}

