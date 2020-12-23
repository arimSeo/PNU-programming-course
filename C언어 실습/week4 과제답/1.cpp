#include<stdio.h>
#include<math.h>
void func(float a, float b, float c)
{
	float p;
	p=b*b-4*a*c;
	if(p==0)
	{
		printf("중근 : %f\n",-b/(2*a));
	} 
	else if(p>0)
	{
		float sq;
		sq=sqrt(p);
		printf("두 실근  : %f %f\n",(-b+sq)/(2*a),(-b-sq)/(2*a));
	}
	else 
	 printf("근없음");
	
}
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	func(a,b,c);
	return 0;
	
}
