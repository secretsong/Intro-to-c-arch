//Sam Feuerborn
//10-16/20
// interger array; assignment 3 pt 1

#include <stdio.h>

int main(){
	
	int x;
	int array[9];
	
	//declaration of array values
	for(x = 0; x < 9; x++){
		scanf("%d", &array[x]);
	}
	
	printf("\n");
	
	//print out the array
	for(x = 0; x < 9; x++){
		printf("%d ", array[x]);
	}
	
	return 0;
}

