//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void){
//	int i, ranval;
//	
//	srand(time(0));		//매번 새로운 난수 발생(random seed값) 
//	for(i=0; i<10; i=i+1){
//		ranval=rand();
//		printf("Random value on [0,%d]: %d\n", RAND_MAX, ranval);
//	}
//	
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	char ch;
	while((ch=getchar()) != EOF) {		//ctrl+z 누르면 종료 
	putchar(ch);
	}
	return 0;
}


