//�迭-�����佺�׳׽��� ü
 
 


//Hanoi Tower
#include <stdio.h>
//ox: ���� ����� ��ȣ, tx:�̵���ų ����� ��ȣ, mx: ������ ������ȣ. 
void hanoi_tower(int n, int ox, int tx, int mx);
void hanoi_tower(int n, int ox, int tx, int mx) {	//1,3,2�� ���� 
	if(n<1){
		printf("Error");
	} 
	else if(n==1) {
		printf("%d -> %d\n",ox, tx);	//1,3
	}
	else{
		hanoi_tower(n-1, ox, mx, tx);  //1,2,3 �� �͵� 
		printf("%d -> %d\n", ox, mx); 	//1,2
		hanoi_tower(n-1, tx, ox, mx);	//3,1,2
	}
}

int main(void) {
	int n;
	printf("�̵��� ���ݼ�(����): ");
	scanf("%d", &n);
	hanoi_tower(n,1,3,2);
		
	return 0;
}



//Fibonacci
//
//#include <stdio.h>
//int fibo(int n) {
//	if(n==0) return 0;
//	if(n==1) return 1;
//	return fibo(n-1)+fibo(n-2);
//}
//
//int main(void) {
//	
//	printf("%d", fibo(4));
//	return 0;
//}





//factorial
//
//#include <stdio.h>
//int factorial(int n);
//
//int factorial(int n) {
//	if(n==0) {
//		return 1;
//	}
//	return n*factorial(n-1);
//}
//
//int main(void) {
//	printf("%d", factorial(5));	
//	
//	return 0;
//}


