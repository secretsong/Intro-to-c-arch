//Sam Feuerborn
//11/6/20
//4-3 Fnt that takes in three arguments and returns the largest

#include <stdio.h>

int main(){
	
	int inputSize = 3;
	int input[inputSize];
	int x, output;
	
	printf("Please enter 3 values:\n");
	
	for(x = 0; x < 3; x++){
		scanf("%d", &input[x]);
	}
	
	output = arguments(input, inputSize);
	
	printf("The largest value you entered is: %d", output);
	
}

int arguments(int input[], int inputSize){
	int argue;
	
	if(input[0] > input[1] && input[0] > input[2])
		argue = input[0];
	else
	if(input[1] > input[0] && input[1] > input[2])
		argue = input[1];
	else
	if(input[2] > input[1] && input[2] > input[0])
		argue = input[2];
	else
	return argue;
}
