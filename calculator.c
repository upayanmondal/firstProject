#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    char operation;
    float result;

    printf("enter the first number: ");
    scanf("%f",&num1);


    printf("enter the operation: ");
    scanf(" %c",&operation);


    printf("enter the second number: ");
    scanf("%f",&num2);

    switch(operation)
    {
        case '+':
        result=num1+num2;
        printf("the answer is: %f",result);
        break;


        case '-':
        result=num1-num2;
        printf("the answer is: %f",result);
        break;


        case '*':
        result=num1*num2;
        printf("the answer is: %f",result);
        break;

        case '/':
        result=num1/num2;
        printf("the answer is: %f",result);
        break;

        default:
         printf("this operation is not valid");
         break;

    }



    return 0;
}

