#include<stdio.h>

int main()
{
	int i,j,x=0;
	char s1[50];
	printf("enter the manuscript: ");
	scanf("%s",s1);
	
	while(s1[x]!='\0')
	{
	    
	    x++;
	    
	}
	
	for(i=0; i<x; i++)
	{
	    for(j=0; j<x; j++)
	    {
	        if(i>=j)    
	        printf("%c ",s1[j]);
	        
	        else
	        printf(" ");
	    
	    }printf("\n");
	    
	}
	
	return 0;
}
