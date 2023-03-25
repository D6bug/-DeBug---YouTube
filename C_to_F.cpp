#include<stdio.h>

int main()
{
	float F,C;
	
	printf("Enter Temperature(in celsius) : ");
	scanf("%f",&C);			//user input Temperature
	
	F = C * (9/5.0) + 32;		//Converting Temperature
	
	printf("\nTemperature in Fahrenheit : %f",F);
	
	return 0;
}
