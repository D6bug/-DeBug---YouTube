#include<stdio.h>

int main()
{
	
	float l,b,perimeter;
	printf("Enter Length : ");		
	scanf("%f",&l);					//User Input Length
	printf("Enter Breadth : ");
	scanf("%f",&b);					//User Input Breadth
	
	perimeter = 2 * (l+b);		//calculating Perimeter
	
	printf("Perimeter is %f",perimeter);
	
	return 0;
}
