#include <stdio.h>

char hexa(int hex) {
	printf("16Áø¼ö= %x", hex);
}

int main(void) {
	int n;
	int hex; 
	
	printf("n= ");
	scanf("%d", &n);

	hexa(n);
	return 0;
}



