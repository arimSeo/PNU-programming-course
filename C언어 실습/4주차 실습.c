#include<stdio.h>
void Line(int n,char c);  //함수의 프로토타입
 
//의미없지만 계속 반복하고 싶을때 
void Line(int n, char c) {
	int i;
	for(i=1; i<=n; i++)
		printf("%c",c)
	printf("\n")
//	printf("--------------------------------\n");
}

int main() {
	Line(10,'=');
	printf("a b c d e f\n");
	Line(30,'*');
	printf("ㄱ ㄴ ㄷ ㄹ ㅁ ㅂ\n");
	Line(25,'+');

}
void Line
