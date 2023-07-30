#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Input 2 numbers : ");
    scanf("%d %d",&num1,&num2);

    if (num1>num2)
    printf("\nHighest number : %d\n",num1);
    else if (num2>num1)
    printf("\nHighest number : %d\n",num2);
    else
    printf("\nThe numbers are equal\n");

    return 0;
}
