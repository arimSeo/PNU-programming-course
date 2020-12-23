#include<stdio.h>
void dtok(int n, int k);

void rec(int n,int k )
{
	
	if(n==0) return;
	rec(n/k,k);
	printf("%d ",n%k);
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	//dtok(n,k);
	rec(n,k);
	
	return 0;
	
}
void dtok(int n, int k)
{
	int arr[32];
	int i;
	i=0;
	while(n>0)
	{
		arr[i]=n%k;
		n=n/k;
		i++;
	}
	for(i=i-1;i>=0;i--)
	  printf("%d",arr[i]);
}
