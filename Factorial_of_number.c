#include<stdio.h>

int main(){
	
	int num,factorial=1;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	while(num!=0){
		factorial = factorial * num;
		num--;
	}
	
	printf("\nFactorial is %d",factorial);
	
	return 0;
}
