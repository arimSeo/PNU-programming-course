#include <stdio.h>
int main(void){
	char *pstr;
	int num=0, sum=0;
	char str[]="123,456,789";

	for(pstr=str; *pstr!='\0'; ++pstr ){
		if(*pstr ==',') {
			sum+= num;
			num =0;
		} else{
			num=num*10 +(*pstr-'0');
		}
	}
	sum += num;
	printf("Sum of all values in ");
	printf(" CSV[%s] : %d", str, sum);
	return 0;
}

