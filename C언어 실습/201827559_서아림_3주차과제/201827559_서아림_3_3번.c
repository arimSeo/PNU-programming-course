#include <stdio.h>

int main(void) {

	int i,x,n;
	int arr[10];
	
	printf("10���� ������ �Է�: "); 
	for(i=0; i<10; ++i){
		scanf("%d", &arr[i]);
	}
	
	while(1){
		printf("ã�� ���� �Է�: ");
		scanf("%d", &x);		//ã�� ��x �Է� 
		for(n=0; n<10; n++){
			if (x==arr[n]) {
				printf("%d�� %d��° �Էµ� ���Դϴ�.\n", x, n+1); 
				break;
			}
		}
		if(n==10){
			printf("%d�� �Է��� ���� �����ϴ�.\nGood bye", x);
			break;
		}
	}
	return 0;
}

