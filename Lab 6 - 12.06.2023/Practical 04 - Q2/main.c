#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, op;
    printf("Input 2 numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("\nSelect the Operator\n");

    printf("\nEnter 1 to Add (+) \n");
    printf("Enter 2 to Subtract (-) \n");
    printf("Enter 3 to Multiply (*) \n");
    printf("Enter 4 to Divide (/) \n\n");

    scanf("%d",&op);

    switch(op)
    {
        case 1 : printf("\nAnswer : %d \n",num1 + num2);break;
        case 2 : printf("\nAnswer : %d \n",num1 - num2);break;
        case 3 : printf("\nAnswer : %d \n",num1 * num2);break;
        case 4 : printf("\nAnswer : %.2f \n",(float)num1 / num2);break;

        default : printf("\nInvalid operator!\n");
    }

    return 0;
}
