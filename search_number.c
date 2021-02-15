#include<stdio.h>

int main()
{
	int size;
	
	printf("enter the size of the array: ");
	scanf("%d",&size);
	
	int num[size],i,count=0;
	
	for(i=0; i<size; i++)
	{
		printf("enter the %d th number: ",(i+1));
		scanf("%d",&num[i]);
	
	}
	
	int search;
	
	printf("enter the number you want to  search: ");
	scanf("%d",&search);
	
	for(i=0; i<size; i++)
	{
		if(search == num[i])
		
		count++;
		
	}
	
	if(count>0)
	printf("your number is present for %d times",count);
	
	else
	printf("your number does not exist");
	
	
	return 0;
}
