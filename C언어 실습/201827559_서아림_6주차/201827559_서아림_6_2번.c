#include<stdio.h>
#include <string.h>

void* Capitalize(char word[]);

char first_char(char str[]){
	int i;
	
	for(i=0; str[i]!='\0'; i++){
		i++;
	}
	Capitalize(str);
	printf("���: %s", str);
}

int main(void) {
	char str[100];
	int i;
	printf("�Է�: ");
	gets(str);
	
	first_char(str);
	
	return 0;
}


void* Capitalize(char word[]) {
    int count = 0;
    for (; count <= strlen(word); count++)
    {
        if (isalpha(word[count])) {		// ���ĺ��̸� 
            word[count] = toupper(word[count]);		//�빮�ڷ� 

            if (!isspace(word[count + 1])) {		// ���� �ܾ ������ �ƴϸ�
                while (!isspace(word[count])) {		 // ������ ���ö����� ���� ����
                
                    // �߰��� �ִ� �ܾ���� �빮���̸� �ҹ���ȭ.
                    if (isupper(word[count+1]))
                        word[count+1] = tolower(word[count+1]);
 
                    // �ܾ� ������ ������ �������� Ż��.
                    else if (count >= strlen(word))
                        break;
                    count++;
                }
            }
            continue;
        }
    }
}


