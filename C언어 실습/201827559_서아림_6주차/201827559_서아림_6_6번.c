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
		else {		//10�����϶� 3���� ���� ��.
			num= three[count];
		}
	}
	sum +=num;
	printf("Sum of all values in CSV[%s] : %d", str, sum);
	
	return 0;
}



