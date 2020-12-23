#include <stdio.h>
int i;
void func1(void);
void func2(void);

int main() {
	int i=10000;
	i++;
	{
		int i=10;
		i++;
		{
			int i=100;
			i--;
			func1();
			func2();
			printf("bloc3: i=%d\n", i);
		}
		func1();
		func2();
		printf("bloc2: i=%d\n", i);
	}
	func1();
	func2();
	printf("bloc1: i=%d\n", i);
}

void func1(void){
	int i=1000;
	printf("func1: i=%d\n", ++i);
}
void func2(void){
	printf("func2: i=%d\n", i++);
}


