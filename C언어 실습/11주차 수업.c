//#include <stdio.h>
//
//typedef struct student{
//	int id;
//	char *pname;
//	double points;
//} STUD;
//
//int main(void){
//	STUD s1={1, "Choi", 9.9};
//	STUD *ps1= &s1; 	//struct student *ps1;
//	
//	s1.id=2;	//일반변수의 경우 . 이용해 member에 접근 
//	ps1->id=3; 		//포인터변수의 경우 '->' 이용. 
//	(*ps1).id=4;	//되긴 하지만 선호x
//	*psi.id=5;		//error : '.'연산자의 우선순위  > '*'연산자 우선순위 
//	
//	return 0;
//}


//#include <stdio.h> 
//void stud_printx(struct student s) {
//    printf("[%d:%s] = %lf\n", s.id, 
//         s.pname, s.points);
//}
//int main(void)
//{
//    struct student {
//        int id;
//        char *pname;
//        double points;
//    };
//    struct student s1, s2;
//
//    s1.id = 1;
//    s1.pname ="Choi";
//    s1.points = 9.9;
//    s2.id = 2;
//    s2.pname = "Park";
//    s2.points = 0.1;
//
//    stud_printx(s1);
//    stud_printx(s2);
//    return 0;
//}
//


//
//#include <stdio.h> 
//typedef struct student {
//    int id;
//    char *pname;
//    double points;
//} STUD;
//int main(void)
//{
// 	STUD s1 = {1, "Choi, Su-Ji", 9.5};
// 	STUD s2 = {2, "BTS", 9.4};
// 	
// 	printf("sizeof(char *)  : %d\n",sizeof(char *));
// 	printf("sizeof(s1)      : %d\n",sizeof(s1));
// 	printf("sizeof(s2)      : %d\n",sizeof(s2));
// 	printf("sizeof(s1.pname): %d\n",sizeof(s1.pname));
//
//	return 0;
//}


//
//#include <stdio.h> 
//typedef struct student {
//    int id;
//    char *pname;
//    double points;
//} STUD;
//
//int main(void)
//{
//	STUD s1 = {1, "Choi", 9.9};
//	STUD s2;
//	struct student s3;
//
//	char aMsg1[] = "Hello";
//	char aMsg2[10];
//
//	int  aN1[]={1, 2, 3};
//	int  aN2[3];
//
//	s2 = s1;	// 1)
//	s3 = s1;	// 2)
//	aN2 = aN1;	// 3)
//	aMsg2 = aMsg1;	// 4)
//
//	return 0;
//}



//
//#include <stdio.h> 
//int main(void)
//{
//	struct stud {
//		int 	id;
//		char 	grade;
//		double 	points;
//	} s1, *ps1 = &s1;
//
//	s1
//.id
// = 23;
//	s1
//.grade
// = 'A';
//	s1
//.points
// = 97.2;
//
//	printf("%d, %c, %.1lf\n", ps1
//->id
//, ps1
//->grade
//, ps1
//->points
//);
//
//	return 0;
//}

//
//#include <stdio.h> 
//int main(void)
//{
//	struct stud {
//		int 	id;
//		char 	grade;
//		double 	points;
//	} s1 = {23, 'A', 97.2}, *ps1 = &s1;
//
//	s1->id = 24;		// 1)  error
//	&s1->id = 24;		// 2) error
//	(&s1)->id = 24;		// 3) 
//
//	ps1.id = 24;		// 4) error
//	*ps1.id = 24;		// 5) error
//	(*ps1).id = 24;		// 6)
//
//
//    return 0;
//}

//
//#include <stdio.h> 
//typedef struct _st_int {
//		int n[4];
//} st_int;
//
//void foo(int ns[4]) {
//	int i=0;
//	while (i<4)
//		ns[i++] = 10;
//}
//
//void st_foo(st_int ss) {
//	int i=0;
//	while (i<4)
//		ss.n[i++] = 10;
//}
//int main(void) {
//	int ns[4] = {1, 2, 3, 4};
//	st_int ss = { {1, 2, 3, 4} };
//	int i;
//
//	for (i=0; i<3; i++)
//		printf("%d, %d, ", ns[i], ss.n[i]);
//	printf("%d, %d\n", ns[i], ss.n[i]);
//
//	foo(ns);
//	st_foo(ss);
//
//	for (i=0; i<3; i++)
//		printf("%d, %d, ", ns[i], ss.n[i]);
//	printf("%d, %d\n", ns[i], ss.n[i]);
//
//	return 0;
//}


#include <stdio.h> 
typedef struct student {
    int id;
    char *pname;
    double points;
} STUD;

int main(void) {
	STUD *ps;		// pointer
	STUD pnuecs[] = { {1, "Choi", 9.9},
			{2, "Park", 0.1},
			{3, "Kim", 5.0 },
			{4, "Lee", 3.0 },
			{5, "Moon", 9.5 },
			{6, "Kang", 7.0 },
			{7, "Jeon", 0.9 },
			{-1, NULL, 0 } };

	for(ps=pnuecs; ps->id >= 0; ps++) {
             printf("[%d:%s] = %lf\n",
                 ps->id, ps->pname,
			 ps->points);
	}

	return 0;
}
//
//#include <stdio.h> 
//typedef struct student {
//    int id;
//    char *pname;
//    double points;
//} STUD;
//
//int main(void) {
//	int i;		// index
//	STUD pnuecs[] = { {1, "Choi", 9.9},
//			{2, "Park", 0.1},
//			{3, "Kim", 5.0 },
//			{4, "Lee", 3.0 },
//			{5, "Moon", 9.5 },
//			{6, "Kang", 7.0 },
//			{7, "Jeon", 0.9 },
//			{-1, NULL, 0 } };
//
//	for (i=0; pnuecs[i].id >= 0; i++ ){
//             printf("[%d:%s] = %lf\n",
//                 pnuecs[i].id, pnuecs[i].pname,
//			 pnuecs[i].points);
//	}
//
//	return 0;
//}
