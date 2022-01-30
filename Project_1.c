//Sam Feueborn
/* 9/9/20 */

//calculates the average of a user input

#include <stdio.h>


int main(void){
	
	double num[4];
	int x = 0;
	int stop = 5;
	
	//loop for user input
	while(x < stop){
		printf("Please enter five numbers:");
		scanf("%lf", &num[x]);
		printf("number entered is %.2lf \n", num[x]);
		x++;
	}
	
	//arithmatic for answers
	double sum = num[0] + num[1] + num[2] + num[3] + num[4];
	double avg = sum / 5;
	
	printf("The sum of your entered numbers is %.2lf \n", sum);
	printf("The average of your entered numbers is %.2lf \n", avg);
	
	return 0;
}
