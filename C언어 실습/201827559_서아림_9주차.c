#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "baseball.h"
#define ATTEMPT_LIMIT 9

int generate_target_number();
int guess_number();
int get_match_result(int target, int guessed);
void receive_match_result(int result, int guessed);
int is_different_digits(int num);
int generate_a_digit();


int main(void){
	int n_attempt = 0;
	int target_num, guessed_num, match_result;
	
	srand(time(0));
	target_num = generate_target_number();
	do{
		printf("Attempt [%d,%d]",++n_attempt, ATTEMPT_LIMIT);
		guessed_num =guess_number();
		match_result= get_match_result(target_num, guessed_num);
		receive_match_result(match_result, guessed_num);
	}
	while (n_attempt <= ATTEMPT_LIMIT && match_result != 30);
	
	if(match_result==30)
		printf("Congratulation!!! You Win\n");
	else printf("Nice Try!!! But You Lose, The target number is %d\n", target_num);
	
	return 0;
}


int is_different_digits(int num){
	int digits[3];
	int is_different=1;
	
	digits[0]= num%10;
	digits[1]= (num/10)%10;
	digits[2]= (num/100)%10;
	
	if((digits[0]==digits[1])||(digits[0]==digits[2])|| (digits[1]==digits[2]))
		is_different =0;
		
	return is_different;
}

int generate_a_digit(){
	return (rand()%10);
}


int generate_target_number(){
	int num;
	do{
		num= rand()%1000;
	}
	while (!is_different_digits(num));
	return num;
}

int get_match_result(int target, int guessed)
{
	int n_strike=0, n_ball=0;
	// Enter your code here
	//같으면 strike 아니면 ball/out 
	if(target == guessed){
		n_strike++;
	}
	else n_ball++;
	
	return (n_strike*10 + n_ball);
}


int guess_number(){
	int num;
	while(1){
		printf("Enter your guess : ");
		scanf("%d", num);
		if(num<1000 && is_different_digits(num))
			break;
		
		printf("Input Error!!! - Wrong number format\n");
	}
	return num;
}

void receive_match_result(int result, int guessed){
	int n_strike = result/10, n_ball=result%10;
	switch(result){
		case 30: printf("Congratulation!!!\n");
			break;
		case 0: printf("Oops !!!\n");
			break;
		default : printf("Nice try!!!\n");
	}
	printf("Your guess %d is [%d] strikes and [%d] balls\n", guessed, n_strike, n_ball);
	
}


