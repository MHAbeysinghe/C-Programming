#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],x;

    printf("Input 10 integers : \n");

    for (x=0;x<10;x++)
    {
        scanf("%d",&array[x]);
    }

    printf("\nArray : ");

    for (x=0;x<10;x++)
    {
        printf("%d ",array[x]);
    }

    printf("\n");

    return 0;
}
