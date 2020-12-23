#include <stdio.h>
int main(void) {
	int i;
	int num=0, sum=0;
	char str[]="123,456,789";
	char three[100];
	
	for(i=0; str[i]; i++) {
		int count=0;
		if(str[i]==','){
			char three[count];
			count++;
		}
		else {		//10진수일때 3개씩 묶어 합.
			num= three[count];
		}
	}
	sum +=num;
	printf("Sum of all values in CSV[%s] : %d", str, sum);
	
	return 0;
}



