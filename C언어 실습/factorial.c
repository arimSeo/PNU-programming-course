//배열-에라토스테네스의 체
 
 


//Hanoi Tower
#include <stdio.h>
//ox: 현재 막대기 번호, tx:이동시킬 막대기 번호, mx: 나머지 막대기번호. 
void hanoi_tower(int n, int ox, int tx, int mx);
void hanoi_tower(int n, int ox, int tx, int mx) {	//1,3,2번 막대 
	if(n<1){
		printf("Error");
	} 
	else if(n==1) {
		printf("%d -> %d\n",ox, tx);	//1,3
	}
	else{
		hanoi_tower(n-1, ox, mx, tx);  //1,2,3 번 믹데 
		printf("%d -> %d\n", ox, mx); 	//1,2
		hanoi_tower(n-1, tx, ox, mx);	//3,1,2
	}
}

int main(void) {
	int n;
	printf("이동할 원반수(높이): ");
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


