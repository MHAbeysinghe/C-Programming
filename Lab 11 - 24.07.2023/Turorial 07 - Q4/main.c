#include <stdio.h>

int findquotient(int num1,int num2)
{
    int quotient= num1/num2;
    return quotient;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("\nThe quotient of 2 numbers : %d\n",findquotient(num1,num2));

}
