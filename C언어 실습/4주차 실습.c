#include<stdio.h>
void Line(int n,char c);  //�Լ��� ������Ÿ��
 
//�ǹ̾����� ��� �ݺ��ϰ� ������ 
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
	printf("�� �� �� �� �� ��\n");
	Line(25,'+');

}
void Line
