#include <stdio.h>
// ��� ���ϴ� �Լ� 
int power( int num, int k ) {
    if( k == 0 )
        return 1;   
    return num * power( num, k-1 );
}
int main(void) {
   int n;
   printf("n���� �Է�: ");
   scanf("%d", &n);
   
   // 1^k + 2^k + .... + n^k
   int i, ans;
   for (i = 1; i <= 5; i++) {
      int j;
      for (j = 1; j <=n; j++) {
        ans += power(j, i);
      }
   }
   printf("���: %d", ans);
   return 0;
}
