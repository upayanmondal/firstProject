#include<stdio.h>

int factorial(int num)
{
	
	int i,f=1;
	
	for(i=1; i<=num; i++)
	{
		
		f=f*i;
		
		
	}

	
	return (f);
}

int main()
{
	int num,r,nPr;
	
	printf("enter the total number and the value of r: \n");
	scanf("%d%d",&num,&r);

	
	
	
	
	
	nPr = factorial(num)/factorial((num-r));
	
	printf("the value of nPr is: %d",nPr); 
	
	return 0;
}

