#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, average;

    printf("Input two numbers with decimals : ");
    scanf("%f %f",&num1, &num2);
    average = (num1+num2)/2 ;

    printf("\nAverage = %f \n",average);
}
