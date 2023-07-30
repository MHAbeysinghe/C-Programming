#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],x,count=0;

    printf("Input 10 integers : \n");

    for (x=0;x<10;x++)
    {
        scanf("%d", &array[x]);
    }

    for(x=0;x<10;x++)
    {
        if(array[x]%2==0)
        {
            count++;
        }
    }

    printf("\nCount of even numbers : %d\n",count);

    return 0;
}
