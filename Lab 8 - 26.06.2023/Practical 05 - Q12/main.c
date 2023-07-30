#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,num;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\n");

    for (x=1;x<=num;x++)
    {
        if(num%x==0)
            printf("%d is a factor of %d\n",x,num);
    }

    return 0;
}
