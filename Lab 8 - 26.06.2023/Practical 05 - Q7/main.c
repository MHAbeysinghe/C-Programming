#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,first=0,second=1,next;

    for(i=0;i<10;i++)
    {
        if(i==0||i==1)
        {
            printf("%d ",i);
        }
        else
        {
        next=first+second;
        first=second;
        second=next;

        printf("%d ",next);
        }
    }

    return 0;
}
