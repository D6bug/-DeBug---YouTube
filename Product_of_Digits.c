#include<stdio.h>

int main(){
	
	int num,unit,product=1;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	while(num!=0){
		unit = num%10;
		product = product*unit;
		num = num/10;
	}	
	
	printf("\nProduct of Digits is %d",product);
	
	return 0;
}
