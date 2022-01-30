//Sam Feuerborn
//10-16-20
//dice roll; assignment 3 pt 4

#include <stdio.h>


int main(){
	
	int dice[1000];
	int num[6];
	int i, j;
	
	//assign values to the dice roll
	for(i = 0; i < 1000; i++){
		
		dice[i] = rand() % 6 + 1;
	}
	
	//remove random values for num
	for(i = 0; i < 6; i++){
		num[i] = 0;
	}
	
	//counter for how many times each number appears
for(i = 0; i < 1000; i++){
		if(dice[i] == 1){
			num[0] += 1;
		}
		else if(dice[i] == 2){
			num[1] += 1;
		}
		else if(dice[i] == 3){
			num[2] += 1;
		}
		else if(dice[i] == 4){
			num[3] += 1;
		}
		else if(dice[i] == 5){
			num[4] += 1;
		}
		else if(dice[i] == 6){
			num[5] += 1;
		}
	}
	
	//prints out how many times each value appears
	for(i = 0; i < 6; i++){
		printf("%d occurs %d times\n", i + 1, num[i]);
	}
	
	return 0;
}
