//Sam Feuerborn
//10-16-20
//array average; assignment 3 pt 3


#include <stdio.h>

#define ROWS 10
#define COLS 10


int main(){
	
	int array[ROWS][COLS];
	int x, y;
	int sum, avg;
	
	//fill in array values
	for(x = 0; x < ROWS; x++){
		for(y = 0; y < COLS; y++){
		array[x][y] = rand() % 100;}
	}
	
	//find the sum of the array's values
	for(x = 0; x < ROWS; x++){
		for(y= 0; y <COLS; y++){
		sum += array[x][y];
		}
	}
	
	//print the array
	for(x = 0; x < ROWS; x++){
		for(y = 0; y < COLS; y++){
			printf("%6d", array[x][y]);
		}
		printf("\n");
	}
	printf("Sum: %d \n", sum);
	
	//find and print the average of the array's values
	avg = sum / 100;
	printf("Average: %d", avg);
	
	return 0;
}
