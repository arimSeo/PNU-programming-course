#include<stdio.h> 
int power(int m, int n)
{
	if(n==0) return 1;
	else 
	   return m*power(m,n-1);
 }
int main()
{
	int n,k,p,sum=0;
	int i;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
	  p=power(i,k);
	  sum+=p;
     }
	printf("%d",sum);
}
