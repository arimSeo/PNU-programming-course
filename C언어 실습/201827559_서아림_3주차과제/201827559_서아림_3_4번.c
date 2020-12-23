#include <stdio.h>

int main(void){
	int i,j,n, sum=0, arr[9];
	
	printf("입력:\n");
	for(i=0; i<9; i++){
			scanf("%d", &arr[i]);
			sum+=arr[i];
	}
	for(i=0; i<9; i++){
		for(j=0; j<9,j!=i; j++) {
			if(sum-arr[i]-arr[j]==100){
				printf("\n출력:\n");
				for(n=0; n<9; n++){
					if(n!=i && n!=j)
						printf("%d\n", arr[n]);	
				}
			}					
		}
	}
	return 0;
}
