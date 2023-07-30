#include <stdio.h>

void cal_sum_diff()
{
    int num1,num2;
    printf("Input 2 number : ");
    scanf("%d %d",&num1,&num2);
    printf("\nThe sum of the 2 numbers : %d\n",num1+num2);
    printf("The difference of 2 numbers : %d\n\n",num1-num2);
}

int main()
{
    cal_sum_diff();

}
