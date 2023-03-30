#include<stdio.h>

int main(){
	
	int num,unit,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	while(num!=0){
		unit = num%10;
		sum = sum+unit;
		num = num/10;
	}
	
	printf("\nSum of Digits : %d",sum);
	
	return 0;
}


