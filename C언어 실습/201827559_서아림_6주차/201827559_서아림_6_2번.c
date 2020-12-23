#include<stdio.h>
#include <string.h>

void* Capitalize(char word[]);

char first_char(char str[]){
	int i;
	
	for(i=0; str[i]!='\0'; i++){
		i++;
	}
	Capitalize(str);
	printf("출력: %s", str);
}

int main(void) {
	char str[100];
	int i;
	printf("입력: ");
	gets(str);
	
	first_char(str);
	
	return 0;
}


void* Capitalize(char word[]) {
    int count = 0;
    for (; count <= strlen(word); count++)
    {
        if (isalpha(word[count])) {		// 알파벳이면 
            word[count] = toupper(word[count]);		//대문자로 

            if (!isspace(word[count + 1])) {		// 다음 단어가 공백이 아니면
                while (!isspace(word[count])) {		 // 공백이 나올때까지 돌린 다음
                
                    // 중간에 있는 단어들이 대문자이면 소문자화.
                    if (isupper(word[count+1]))
                        word[count+1] = tolower(word[count+1]);
 
                    // 단어 끝까지 루프를 돌았으면 탈출.
                    else if (count >= strlen(word))
                        break;
                    count++;
                }
            }
            continue;
        }
    }
}


