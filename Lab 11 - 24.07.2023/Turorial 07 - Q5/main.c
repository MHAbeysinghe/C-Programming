#include <stdio.h>

void findsum()
{
    int num1,num2,sum;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("\nThe sum is %d \n\n",sum);
}

int main()
{
    findsum();
    findsum();
    findsum();
    findsum();

}
