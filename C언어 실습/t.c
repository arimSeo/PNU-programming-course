//#include <stdio.h> 
//int add(int n) {
//	int sum = 0;
//	sum += n;
//	return sum;
//}
//
//int main(void) {
//	int ns[] = {1,2,3,4,5,-1};
//	int i=0, sum;
//
//	while (ns[i] > 0) {
//		sum = add(ns[i++]);		//i=0부터 4까지-> 4++= 5 
//	}
//	printf("The sum is %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h> 
//int add(int n) {
//	static int sum = 0;
//	sum += n;
//	return sum;
//}
//
//int main(void) {
//	int ns[] = {1,2,3,4,5,-1};
//	int i=0, sum;
//
//	while (ns[i] > 0) {
//		sum = add(ns[i++]);
//	}
//	printf("The sum is %d\n", sum);
//
//	return 0;
//}


//
//#include <stdio.h> 
//#define END_MARK		-1
//int sum_int_array(int nums[]) {
//	int i=0, sum=0;
//	while (nums[i] != END_MARK) {
//		sum += nums[i];
//		nums[i++] = 5;
//	}
//	return sum;
//}
//int main(void) {
//	int ns[4] = {1,2,3,END_MARK};
//
//	int sum = sum_int_array(ns);
//
//	printf("ns [%d, %d, %d]\n",
//		ns[0],ns[1],ns[2]);
//
//	printf("Sum of ns:%d\n", sum);
//	return 0;
//}


#include <stdio.h> 
#include <math.h>
int main(void) {
	double x = 9.0/5;
	double y = 6.0/5;
	double z = -6.0/5;

	printf("ceil(%.2lf)=%.0lf, ceil(%.2lf)=%.0lf, ceil(%.2lf)=%.0lf\n",
			x,ceil(x),y,ceil(y),z,ceil(z));
	printf("floor(%.2lf)=%.0lf, floor(%.2lf)=%.0lf, floor(%.2lf)=%.0lf\n",
			x,floor(x),y,floor(y),z,floor(z));
	printf("round(%.2lf)=%.0lf, round(%.2lf)=%.0lf, round(%.2lf)=%.0lf\n",
			x,round(x),y,round(y),z,round(z));
	printf("trunc(%.2lf)=%.0lf, trunc(%.2lf)=%.0lf, trunc(%.2lf)=%.0lf\n",
			x,trunc(x),y,trunc(y),z,trunc(z));

	return 0;
}



