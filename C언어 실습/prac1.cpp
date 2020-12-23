
//#include <stdio.h> 
//int main(void)
//{
//    char msg[4] = {'A','B','C','\0'};
//    printf("%d\n", sizeof(msg));
//    return 0;
//}



#include <stdio.h> 
int main(void)
{
    int i;	// index
    int len;    // length
    char msg[]="Hello\0 007\n";

    for(i=0;msg[i]!='\0';i++)
	;
    len = i;
    
    printf("The size of the char array msg[] is %d\n",sizeof(msg));
    printf("The length of the string [%s] : %d\n", msg,len);

    return 0;
}




//
//#include <stdio.h> 
//
//int main(void)
//{
//    short n;
//    unsigned short un;
//
//    n=0x8000;
//    un=0x8000;
//    printf("%d, %d\n", n, un);
//
//    n=0xFFFF;
//    un=0xFFFF;
//    printf("%d, %d\n", n, un);
//    return 0;
//}



//
//#include <stdio.h> 
//
//int main(void)
//{
//	int n = 0xFFFFFFFF;
//	unsigned int un = 0xFFFFFFFF;
//	
//	printf("n>0 ? ");
//	if (n>0)
//	    printf("true\n");
//	else
//	    printf("false\n");
//
//	printf("un>0 ? ");
//	if (un>0)
//	    printf("true\n");
//	else
//	    printf("false\n");
//
//	return 0;
//}



//
//#include <stdio.h> 
//int main(void)
//{
//    int a;
//
//    printf("%d\n", a=3 );
//    printf("%d\n", a-=1 );
//    printf("%d\n", a+=(a=2*a+3)-5 );		//´ä: 9 
//
//    return 0;
//}
//


//
//#include <stdio.h> 
//int main(void)
//{
//	int nx = 0x85857A7A;
//	int mask = 0xFFFF0000;
//
//	printf("nx = 0x%08X\n", nx);
//	printf("mask = 0x%08X\n", mask);
//
//	printf("~nx = 0x%08X\n", ~nx);	// NOT
//
//	printf("nx&mask = 0x%08X\n", nx&mask); // AND
//	printf("nx|mask = 0x%08X\n", nx|mask); // OR
//
//	printf("nx^mask = 0x%08X\n", nx^mask); // XOR
//
//	return 0;
//}


//
//#include <stdio.h> 
//
//int main(void)
//{
//    char ch = '1' + 2;
//
//    printf("%c\n", ch);		//´ä: C 
//    printf("%d\n", ch);		// 67
//
//    return 0;
//}


//#include <stdio.h> 
//
//int main(void)
//{
//    char c1, charray[4];
//    unsigned int n1, narray[4];
//
//    printf("%d, %d, %d, %d\n", 
//          sizeof(char),sizeof(short),sizeof(int),sizeof(double));
//    printf("%d, %d, %d\n", 
//          sizeof(c1), sizeof(charray[0]),sizeof(charray));
//    printf("%d, %d, %d\n", 
//          sizeof(n1), sizeof(narray[0]),sizeof(narray));
//
//    return 0;
//}


//#include <stdio.h> 
//
//void print(int n) {
//	printf("%d\n",n);
//}
//
//int main(void) {
//	int a=3;
//	
//	print(a++);
//	print(++a);
//	print(a++);
//	print(++a);
//	
//	return 0;	
//}


//#include <stdio.h> 
//int main(void)
//{
//	int a=3, b, c, d;
//
//	b = a++;
//	c = ++b;
//	d = --c;
//	printf("%d,%d,%d,%d\n", a, b, c, d--);		//´ä: 4,4,3,3 
//
//	return 0;
//}


//char str[10]= "test";
//printf(%c,)
//
////print("%d", &!(||)); 
