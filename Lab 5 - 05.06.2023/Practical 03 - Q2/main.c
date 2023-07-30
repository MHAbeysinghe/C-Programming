#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,largest,smallest;
    printf("Input three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    largest=num1;
    if(num2>largest)
    {
        largest=num2;
    }
    if(num3>largest)
    {
        largest=num3;
    }
    smallest=num1;
    if(num2<smallest)
    {
        smallest=num2;
    }
    if(num3<smallest)
    {
        smallest=num3;
    }

    printf("\nLargest number : %d",largest);
    printf("\nSmallest number : %d\n",smallest);

    return 0;
}
