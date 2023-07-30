#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,sum=0;

    while(num!=-1)
    {
        printf("Input a number (input -1 to stop) : ");
        scanf("%d",&num);

        if(num!=-1)
            sum+=num;
    }

    printf("\nSum of the numbers : %d\n",sum);

    return 0;
}
