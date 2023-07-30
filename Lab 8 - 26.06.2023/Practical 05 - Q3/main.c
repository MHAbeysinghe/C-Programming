#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,factorial=1;
    int x;
    printf("Enter a number : ");
    scanf("%d",&num);
    x=num;

    for(num;num>=1;num--)
    {
        factorial*=num;
    }

    printf("Factorial of %d is %d",x,factorial);

    return 0;
}
