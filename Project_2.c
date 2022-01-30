//Sam Feuerborn
/*9-9-20*/

//calculates volume of a cube

#include <stdio.h>


int main(void){
	
	double ln, wd, hi;
	
	//User entry of cube
	printf("Please enter the length of the cube in inches \n");
	scanf("%lf", &ln);
	
	printf("Please enter the width of the cube in inches \n");
	scanf("%lf", &wd);
	
	printf("Please enter the height of the cube in inches \n");
	scanf("%lf", &hi);
	
	
	//confirmation test code
	printf("Length: %.2lf \n", ln);
	printf("Width: %.2lf \n", wd);
	printf("Height: %.2lf \n", hi);
	
	double invol = ln * wd * hi;
	double ftvol = invol / 12;
	
	printf("The volume is %.2lf in cubic inches \n", invol);
	printf("The volume is %.2lf in cubic feet \n", ftvol);
	
	return 0;
	
}
