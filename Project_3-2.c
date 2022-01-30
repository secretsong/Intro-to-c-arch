//Sam Feuerborn
//10-16-20
//columed array; assignment 3 pt 2

#include <stdio.h>

#define ROWS 10
#define COLS 10

int main(){
	
	int i, j;
	int n;
	double array[ROWS][COLS];
	
	//define the array
	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			array[i][j] = (double) (rand() % 100 + 1) / 2;
		}
	}
	//print out dimensional array
	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
		printf("%6.2lf", array[i][j]);
	}
		printf("\n");
		}
		
		return 0;
	}
