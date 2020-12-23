#include <stdio.h>
#define NSIZE 3
void pritNxN(int m[NSIZE][NSIZE]);


void printNxN(int m[NSIZE][NSIZE]) {
	int i,j;
	char lineseg[8]="-------";
	
	printf("+");
	for(i=0; i<NSIZE; i++) {
		printf("%s",lineseg);
	}
	printf("\n");
	
	for(i=0; i<NSIZE; i++) {
		printf("|");
		for(j=0; j<NSIZE; j++) {
			printf("%6d", m[i][j]);
		}
		printf("|\n");
	}
	printf("+");
	for(i=0; i<NSIZE; i++) {
		printf("%s", lineseg);
	}
	printf("+\n");
}

int main(void) {
	int A[NSIZE][NSIZE]={{1,2,3},{4,5,6},{7,8,9}};
	int B[NSIZE][NSIZE];
	int C[NSIZE][NSIZE];
	int D[NSIZE][NSIZE];
	int i,j;
	
	printNxN(A);
	
	//B
	B[NSIZE][NSIZE]=A[NSIZE][NSIZE]+1;
	
	printNxN(B);
	
	
	//C
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++){
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }
	printNxN(C);


	//D:전치행렬 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%6d", D[j][i]);
        printf("\n");
    }
	printNxN(D);
	
	return 0;
}


