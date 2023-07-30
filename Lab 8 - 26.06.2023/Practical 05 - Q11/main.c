#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x,count=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(x=1;x<=num;x++)
    {
        if(num%x==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("\n%d is a prime number\n",num);
    }
    else
    {
        printf("\n%d is not a prime number\n",num);
    }

    return 0;
}
