#include <stdio.h>
int i,n, p,q,bin[32],oct[32], t=0;
int binary(int n){
	while(1) {
       p = n/2; 
       q = n-(p*2);    		// �������� ���Ѵ�.
       bin[t++] = q; 
       if(p<=0) break;
       n=p;
    }
    for(i=t-1; i>=0; i--)
		printf("%d", bin[i]);
		printf("\n");
	return 0;
}
int octal(int n){
	printf("%o", n);
	return 0;
//	while(1) {
//       p = n/8;
//       q = n-(p*8); 
//       oct[t++] = q; 
//       if(p<=0) break;
//       n= p;
//    }
//    for(i=t-1; i>=0; i--)
//		printf("%d ", oct[i]);
}

int main(void){
	int n, two,eight;
	printf("����n�Է�: ");
	scanf("%d", &n);
	
	printf("2����: ");
	binary(n);
	printf("8����: ");
	octal(n);	

	return 0;
}


