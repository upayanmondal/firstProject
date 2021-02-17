#include<stdio.h>

int main()
{
	int n;
	
	printf("enter the number: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	i=0;
	while(n>0)
	{
		a[i]=n%8;
		n=n/8;
		i++;
	}
	int m=i;
	
	printf("your answer is: ");
	for(i=m-1; i>=0; i--)
	{
		printf("%d",a[i]);
		
	}
	
	return 0;
}
