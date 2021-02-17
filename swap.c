#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("enter the first number: ");
	scanf("%d",&num1);
	
	printf("enter the second number: ");
	scanf("%d",&num2);
	
	num2=num1+num2;
	num1=num2-num1;
	num2=num2-num1;
	
	printf("now the value of first number is: %d\n",num1);
	
	printf("now the value of second number  is: %d",num2);
	
	
	return 0;
}
