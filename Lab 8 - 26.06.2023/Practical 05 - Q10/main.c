#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,a,b;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for(a=1;a<=rows;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
