//Sam Feuerborn
//11/6/20
//4-2 Fnt that displays one's letter grade

//note: Grading scale -> A: 100-90 B: 80-89 C: 70-79 D:60-69 F: 0-60

#include <stdio.h>

int main(){
	
	int input;
	char output;
	
	printf("Please enter your grade:\n");
	scanf("%d", &input);
	
	output = grades(input);
	
	if(output == 'X'){
		printf("Invalid Grade.\n");
	}
	else
	printf("Your letter grade is: %c", output);
}



int grades(input){
	
	char grade;
	
	if(input > 0 && input < 60){
		grade = 'F';
	}
	else
	if(input > 59 && input < 70){
		grade = 'D';
	}
	else
	if(input > 69 && input < 80){
		grade = 'C';
	}
	else
	if(input > 79 && input < 90){
		grade = 'B';
	}
	else
	if(input > 89 && input < 101){
		grade = 'A';
	}
	else
	if(input < 0 || input > 100){
		grade = 'X';
	}
	
	return grade;		
}
