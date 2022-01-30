//Sam Feuerborn
//11/6/20
//4-1 Fnt that finds averages

#include <stdio.h>


int main(){
	
	double sum, avg;
	int arraySize = 7;
	 int arr[arraySize];
	 int x;
	 
	 printf("Please enter 7 intergers:\n");
	 
	 //take in and print the array and calculate the sum
	 for(x = 0; x < 7; x++){
	 	scanf("%d", &arr[x]);
	 	sum += arr[x];
	 }
	  for(x = 0; x < 7; x++){
	 	printf("%d ", arr[x]);
	 }
	 printf("\n");
	 
	 //return the sum and average
	 avg = findAverage(arr, arraySize);
	 printf("The sum is %.2lf\n", sum);
	 printf("The average is %.2lf\n", avg);
}

//Function that calculates the average
int findAverage(int arr[], int arraySize){
	double average, sum;
	int x;
	for(x = 0; x < arraySize; x++){
		sum += arr[x];
	}
	average = sum / arraySize;
	
	return average;
}
