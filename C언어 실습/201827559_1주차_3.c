#include<stdio.h>
int main(void) {
	int kor, eng, mat;
	int total;		 
	float average;	
		
	printf("Enter three subject scores :");
	scanf("%d %d %d", &kor, &eng, &mat);
	
	total= kor+eng+mat;					//���� 
	average=(float)(kor+eng+mat)/3;		//��� 
	
	//������ 
	printf("total : %d\n", total);
	printf("average : %.1f", average);
	
	return 0;
}
