#include <stdio.h>

int main(void) {

	int i,x,n;
	int arr[10];
	
	printf("10개의 정수를 입력: "); 
	for(i=0; i<10; ++i){
		scanf("%d", &arr[i]);
	}
	
	while(1){
		printf("찾을 수를 입력: ");
		scanf("%d", &x);		//찾을 수x 입력 
		for(n=0; n<10; n++){
			if (x==arr[n]) {
				printf("%d은 %d번째 입력된 수입니다.\n", x, n+1); 
				break;
			}
		}
		if(n==10){
			printf("%d은 입력한 수에 없습니다.\nGood bye", x);
			break;
		}
	}
	return 0;
}

