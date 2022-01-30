//Sam Feuerborn
//9-24-2020
//Random Number shenannigans

#include <stdio.h>

int main(void){
	
	int myRandomNumber;
	

	srand(time(NULL)); 	//seed the random num gen
	myRandomNumber = rand(); /*each time you call this function there will be a different random number.*/
	
	//print random num
	printf("The number is %d\n", myRandomNumber);
	
	//is it even or odd?
	if(myRandomNumber%2 == 0)
		printf("%d is even\n", myRandomNumber);
	else
		printf("%d is odd\n", myRandomNumber);
		
		
		
	//am I divisible by three?
	if(myRandomNumber%3 == 0)
		printf("%d is divisible by 3\n", myRandomNumber);
	else
		printf("%d is not divisible by 3\n", myRandomNumber);
		
		
	//am I divisible by ten?
	if(myRandomNumber%10 == 0)
		printf("%d is divisible by 10\n", myRandomNumber);
	else
		printf("%d is not divisible by 10\n", myRandomNumber);
}
