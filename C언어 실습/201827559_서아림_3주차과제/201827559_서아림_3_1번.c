#include <stdio.h>

int main(void) {
	int a,b, i, n=0;		//n�� ���° �������. 
	
	scanf("%d%d", &a, &b);

	for(i=1; i<=b; i++) {
		if(b%i==0) {
			n++; 
		
			if(a==i) {
				printf("a��b��%d ��° ���", n);
				break;
			}
		}
	}
	if(a!=i) {
		printf("%d",-1);
	}	
	return 0;
}

