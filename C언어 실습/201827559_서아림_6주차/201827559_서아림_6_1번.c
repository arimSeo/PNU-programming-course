#include <stdio.h>

int is_digit(char ch);
int is_upper(char ch);
int is_lower(char ch);
int is_alnum(char ch);
int is_alpha(char ch);

int main(void) {
	char ch;
	scanf("%c", &ch);
	
	if(is_digit(ch))
		printf("%c is a digit\n", ch);
	if (is_alpha(ch))
		printf("%c is an alphabet\n", ch);
	if (is_alnum(ch))
		printf("[%c] is an alpha-numeric character\n", ch);	
	if (is_upper(ch))
		printf("%c is an uppercase\n", ch);
	if (is_lower(ch))
		printf("%c is a lowercase\n", ch);
		
		return 0;		
}

int is_digit(char ch) {
	return (ch >= 0x30 && ch<=0x39);
}
int is_alpha(char ch){
	return ((ch>=0x41 && ch<=0x5A)||(ch>=0x61 && ch<=0x7A));
}
int is_alnum(char ch){
	return ((ch>=0x41 && ch<=0x5A)||(ch>=0x61 && ch<=0x7A)||(ch >= 0x30 && ch<=0x39));
}
int is_upper(char ch){
	return (ch>=0x41 && ch<=0x5A);
}
int is_lower(char ch){
	return (ch>=0x61 && ch<=0x7A);
}





