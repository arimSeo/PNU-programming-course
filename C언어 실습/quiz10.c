//#include <stdio.h> 
//int main(void) 
//{
//    int n1=3, * pn = &n1;
//    int n2=0;
//    
//    printf("%p, %p, %p\n", &n1, &n2, &pn); 	// 0)
//    n2 = *pn;			                // 1)
//    *pn = n2 + 1;			        // 2)
//    n1 = *pn + *(&n2);		                // 3)
//    printf("%d, %d, %d\n",n1,n2,*pn);	        // 4)
//    return 0;
//}

//
//#include <stdio.h> 
//
//int foo1(char *pstr) {
//	char *pcur = pstr;
//	while (*pcur++)
//		;
//	return (pcur-pstr);
//}
//
//int foo2(char *pstr) {
//	char *pcur = pstr;
//	while (*pcur)
//		pcur++;
//	return (pcur-pstr);
//}
//
//int main(void) {
//	char str1[] = "12345678";
//	char str2[] = "1234";
//	
//	printf("foo1(str1) = %d, foo2(str1) = %d\n", foo1(str1), foo2(str1));
//	printf("foo1(str2) = %d, foo2(str2) = %d\n", foo1(str2), foo2(str2));
//	
//	return 0;	
//}

//#include <stdio.h> 
//
//int main(void)
//{
//	int a = 1, *pa = &a;
//
//	printf("a: %d, pa: %p\n", a, pa);
//	++*pa;
//	printf("a: %d, pa: %p\n", a, pa);
//	*pa++;
//	printf("a: %d, pa: %p\n", a, pa);
//	a += *--pa;
//	printf("a: %d, pa: %p\n", a, pa);
//
//	return 0;
//}



#include <stdio.h> 
int main(void)
{
	int i;			// index
	int num=0, sum=0;	// number
	char str[]="123,456,789";

	for(i=0; str[i] != '\0'; i++) {
		if (str[i] == ',') { // new num
			sum += num;
			num = 0;
		} else { // a digit
			num = num*10 + (str[i]-'0');
		}
	}
	sum += num; 
	printf("Sum of all values in ");
	printf(" CSV[%s] : %d", str,sum);

    return 0;
}
