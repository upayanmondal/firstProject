#include<stdio.h>

int main()
{
	int row,i,j;
	
	printf("enter the row: ");
	scanf("%d",&row);
	
	for(i=row; i>=1; i--)
	{
		for(j=1; j<=row; j++)
	{
			
		if(i>=j)
		printf("*");
		
		else
		printf(" ");
		
		
	}  printf("\n");	
	}
	
	
	return 0;
}
