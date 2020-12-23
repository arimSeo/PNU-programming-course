#include <stdio.h>

int main(void) {
	int a,b, i, n=0;		//n은 몇번째 약수인지. 
	
	scanf("%d%d", &a, &b);

	for(i=1; i<=b; i++) {
		if(b%i==0) {
			n++; 
		
			if(a==i) {
				printf("a가b의%d 번째 약수", n);
				break;
			}
		}
	}
	if(a!=i) {
		printf("%d",-1);
	}	
	return 0;
}

