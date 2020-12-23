//- 오류의 종류: logic error
//- 오류의 원인: nF-32에 ()를 쓰지 않아, 산술 연산자 우선 순위에 의해 압의 곱(*)이 nF와 먼저 연산되어 값이 다르게 나타났다. 
//또한 5/9는 정수로 계산하면 0이 되어 값이 항상 0이나오므로,  9를 뒤로 빼서 나누어야한다. 

#include <stdio.h>
int main(void)
{
	int nC, nF;
	
	printf("화씨온도를 입력하세요\n");
	scanf("%d", &nF);		//scanf: 입력하는 부분 

	nC =5*(nF-32)/9;
	printf("화씨 %d도는 섭씨 %d도입니다\n", nF, nC);
	
	return 0;
}
