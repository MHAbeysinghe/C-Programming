#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,a,exponent,answer=1;

    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%d",&exponent);
    a=exponent;

    for(exponent;exponent>=1;exponent--)
    {
        answer*=base;
    }

    printf("\n%d to the power %d is %d\n",base,a,answer);


    return 0;
}
