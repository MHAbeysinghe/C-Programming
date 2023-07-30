#include <stdio.h>

int findproduct(int num1,int num2)
{
    int product= num1*num2;
    return product;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("\nThe product of the 2 numbers : %d\n",findproduct(num1,num2));

}
