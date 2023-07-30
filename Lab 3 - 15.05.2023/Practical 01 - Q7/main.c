#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, temp;
    printf("Input two numbers : ");
    scanf("%d %d",&num1, &num2);

    printf("\n%d %d",num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n%d %d\n",num1, num2);
}
