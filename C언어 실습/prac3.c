#include <stdio.h> 
int main(void) {
	int x[2][3] = { {1,3,5}, {2,4,6}};
	
	printf("%d,%d,%d,%d,%d,%d,%d,%d\n",
		  sizeof(int),
		  sizeof(x),
		  sizeof(x[0]),
		  sizeof(x[0][1]),
		  x[0][1],
		  x[1][0],
		  x[1][0]+x[1][1]+x[1][2],
		  x[0][2]+x[1][2]);
	
	return 0;
}




//
//#include <stdio.h> 
//int main(void) {
//	int a,i;
//
//	scanf("%d",&a);
//
//	i=a;
//	while (i < 3) {
//		printf("[1] i=%d\n",i++);	// A
//	}
//
//	i=a;
//	do {
//		printf("[2] i=%d\n",i++);	// B
//	} while (i < 3);
//
//	return 0;
//}


//
//#include <stdio.h>
//#define CAPITAL_C 'C' 
//int main(void) {
//    char A, B='B';
//
//    scanf("%c", &A);
//    switch( A ) {
//        case 'A': 		// 1
//            printf("A==%c\n", A);
//            break;
////        case B: 		// 2
////            printf("A==%c\n", A);
////            break;
//        case CAPITAL_C:         // 3
//            printf("A==%c\n", A);
//            break;
//        case 0x44: 		// 4
//            printf("A==%c\n", A);
//            break;
//        case 'A'+4:		// 5
//            printf("A==%c\n", A);
//            break;
//        default:
//            printf("A==other\n");
//    }
//     return 0;
//}

//
//#include <stdio.h> 
//int main(void) {
//   int a;
//
//    scanf("%d",&a);
//    switch( a ) {
//        case 1:
//            printf("a==one\n");		// a=1 : 1,6만 동작 
//            break;
//        case 2:
//            printf("a==two\n"); 	// 2 : 2,3,6 동작 
//        case 3:
//            printf("a==three\n");	// 3 :
//            break;
//        case 4:
//        case 5:
//            printf("a==five\n");	// 4
//        default:
//            printf("a==other\n");	// 5
//    }
//    printf("End of switch\n");		// 6
// 
//    return 0;
//}
