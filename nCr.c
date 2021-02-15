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

	
	
	
	
	
	nPr = factorial(num)/(factorial(r)*factorial(num-r));
	
	printf("the value of nCr is: %d",nPr); 
	
	return 0;
}

