#include<stdio.h>
#define LENGTH 80
int copy(char *exist, char *anew);

int main(){
	char src[LENGTH], target[LENGTH];
	
	while (!fopen(src,"rb")){
		printf("��������?");
		gets(src);
		if(!fopen(src,"rb")){
			printf("������ �������� �ʽ��ϴ�.\n");
		}
	} 
	printf("�������?");
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
	printf("%d byte ����Ǿ����ϴ�.", r);
	
	fclose(fexist);
	fclose(fanew);

	return ;	
} 



