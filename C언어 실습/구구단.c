#include <stdio.h>

int main(void)
{
	int i , j;
	
	for (i =1; i <10; i =i+1) {
		printf("%d ´Ü\n", i);

		for (j=1; j<10; j=j+1)
			printf("%d X %d = %d\n", i , j, i *j);
//		printf("\n", j);
	}
	
	return 0;
}
