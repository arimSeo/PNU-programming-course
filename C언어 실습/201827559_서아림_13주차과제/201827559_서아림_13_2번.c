#include<stdio.h>
int main(){
	int n=1;
	char buffer[n];
	
	FILE *fp=fopen("input.txt","rb");
	if(n%2!=0){
		printf("Áß¾ÓÀ§Ä¡: %d", buffer[(n/2)+1]);
	}
	else printf("Áß¾ÓÀ§Ä¡: %d",(buffer[(n/2)]+buffer[(n/2)+1])/2);
	
	fclose(fp);
}
void bubble(){
	int n, i, j;
	int buff[n];
	int temp;
	
	for(i=0; i<n; i++){
		for(j=0;j<n-i;j++){
			if(buff[j]>buff[j+1]){
				temp=buff[j];
				buff[j]= buff[j+1];
				buff[j+1]=temp;
			}
		}
	}
}


