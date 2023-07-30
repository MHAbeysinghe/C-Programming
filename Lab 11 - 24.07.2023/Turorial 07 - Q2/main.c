#include <stdio.h>

void cal_sum_diff(int num1,int num2)
{

    printf("\nThe sum of the 2 numbers : %d\n",num1+num2);
    printf("The difference of 2 numbers : %d\n\n",num1-num2);

}

int main()
{
    int num1,num2;
    printf("Input 2 numbers : ");
    scanf("%d %d",&num1,&num2);

    cal_sum_diff(num1,num2);

}
