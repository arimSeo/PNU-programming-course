#include<stdio.h>
#define LENGTH 80
int copy(char *exist, char *anew);

int main(){
	char src[LENGTH], target[LENGTH];
	
	while (!fopen(src,"rb")){
		printf("원본파일?");
		gets(src);
		if(!fopen(src,"rb")){
			printf("파일이 존재하지 않습니다.\n");
		}
	} 
	printf("대상파일?");
	gets(target);
	
	copy(src,target);	
}

int copy(char *exist, char *anew){
	FILE *fexist, *fanew;
	int a, r;
	
	if((fexist=fopen(exist,"rb"))==NULL)
		return -1;
	if((fanew=fopen(anew,"wb"))==NULL){
		fclose(fexist);
		return -1;
	}
	while(1){
		a=fgetc(fexist);
	
		if(!feof(fexist)){
			fputc(a, fanew);
		}
		else break;
	}
	
	fseek(fexist,0,SEEK_END);
	r=ftell(fexist);
	printf("%d byte 복사되었습니다.", r);
	
	fclose(fexist);
	fclose(fanew);

	return ;	
} 



