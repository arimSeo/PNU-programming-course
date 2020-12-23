#include <stdio.h>
#include <math.h>

double answer1(int a, int b,int c){
	//±Ù1 
	double x1= (-b+ sqrt(b*b-4*a*c))/(2*a);
	return x1;
}
double answer2(int a, int b,int c){
	//±Ù2 
	double x2= (-b- sqrt(b*b-4*a*c))/(2*a);
	return x2;
}
int main(void) {
	int a,b,c;
	double x1,x2;
	
	scanf("%d%d%d", &a,&b,&c);
	x1=answer1(a,b,c);
	x2=answer2(a,b,c);
	 
	printf("x1=%lf, x2=%lf", x1, x2);

	return 0;
}


