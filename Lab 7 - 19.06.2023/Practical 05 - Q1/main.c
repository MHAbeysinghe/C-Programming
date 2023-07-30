#include <stdio.h>
#include <stdlib.h>

int main()
{
    //using while loop
    int i=0;

    while(i<=100)
    {
        printf("%d ",i++);
    }

    //using do while loop
    int x=0;
    do
    {
        printf("%d ",x++);
    }while(x<=100);

    //using for loop
    int a;
    for(a=0;a<=100;a++)
    {
        printf("%d ",a);
    }

    return 0;
}
