#include<stdio.h>

int main()
{
	int row,i,j;
	
	printf("enter the row: ");
	scanf("%d",&row);
	
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=row; j++)
		{
			if(i>=j)
			printf("%c",(char)(i+64));
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
