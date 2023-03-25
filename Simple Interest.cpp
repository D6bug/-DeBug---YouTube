#include<stdio.h>

int main()
{
	int T;
	float P,R,SI;
	
	printf("Enter Principal : ");
	scanf("%f",&P);		//user input Principal
	printf("Enter Rate of Interest : ");
	scanf("%f",&R);		//user input Rate of Interest
	printf("Enter Time Period : ");
	scanf("%d",&T);		//user input Time Period
	
	SI = (P*R*T)/100;
	
	printf("\nSimple Interest is %f",SI);		//Printing Simple Interest
	
	return 0;
}
