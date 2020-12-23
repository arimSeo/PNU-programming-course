#include <stdio.h>
int main(void){
	int score,i, sum=0, arr[10];
	
		for(i=0; i<10; ++i){
			printf("%d : ",i+1);
			scanf("%d", &arr[i]);
			score= arr[i];

			//-1 입력	
			if(score== -1){
				i--; 
				break;
			}
		
			//점수가 0~100사이가 아닌경우: 다시입력 
			while(score<0 || score>100){
				printf("%d : ", i+1);
				scanf("%d", &arr[i]);
				score= arr[i];
			}
		
			//학점 
			if(score>=90){
				printf("score: %d(A)\n", score);
			} 
			else if(score>=80){
				printf("score: %d(B)\n", score);
			} 
			else if(score>=70){
				printf("score: %d(C)\n", score);
			} 
			else if(score>=60){
				printf("score: %d(D)\n", score);
			}	 
			else {
				printf("score: %d(F)\n", score);
			}
			sum+=score;
		} 
		
		float average= sum/(i+1);
		printf("Average= %.2f",average);
				
	return 0;
}

