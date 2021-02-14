#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    printf("enter the row: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

         if(i>=j)
        printf("*");

        else
        printf(" ");
        } printf("\n");

    }


    return 0;
}
