#include <stdio.h>
int gSum;
int foo1(int n)
{
    gSum = gSum + n;	  
    return (gSum + 1);
}
int foo2(int n)
{
    int gSum = n;
    return (gSum + 1);
}
int main(void)
{
    int nx;
    gSum = 0;
    nx = foo1(foo2(1));
    printf("nx=%d,gSum=%d\n",nx,gSum);			//�������� ���� gsum���� ������
    return 0;
}
