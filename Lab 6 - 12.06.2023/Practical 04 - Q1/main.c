#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Enter an integer : ");
    scanf("%d",&num1);
    if (num1%2==0)
        printf("\n%d is an even number.\n",num1);
    else
        printf("\n%d is an odd number.\n",num1);

    //same code with switch instead of an if else
    int num2,remainder;
    printf("\nEnter an integer : ");
    scanf("%d",&num2);
    remainder = num2%2;
    switch (remainder)
    {
        case 0 : printf("\n%d is an even number.\n",num2);break;
        default : printf("\n%d is an odd number.\n",num2);

    }


    return 0;
}
