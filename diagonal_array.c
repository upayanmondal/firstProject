#include<stdio.h>

int main()
{
	int row,column;
	
	printf("enter the row: ");
	scanf("%d",&row);
	
	printf("enter the column: ");
	scanf("%d",&column);
	
	int mat[row][column],i,j;
	
	printf("enter the row and column: \n");
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=column; j++)
        		
		scanf("%d",&mat[i][j]);
				
	}
	
	printf("the elements are: \n");
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=column; j++)
		{
			if(i == j)
			printf("%d", mat[i][j]);
			
		}printf("\n");
		
		
	}
	
	
	
	return 0;
}
