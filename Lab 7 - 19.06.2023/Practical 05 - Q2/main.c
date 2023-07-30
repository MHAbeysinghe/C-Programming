#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10],x,total=0;
    float average;

    printf("Input the 10 marks\n\n");
    for(x=0;x<10;x++)
    {
       printf("Enter mark %d : ",x+1);
       scanf("%d",&marks[x]);
       total+=marks[x];
    }

    average=total/10.0;
    printf("\nTotal of the marks : %d\n",total);
    printf("Average : %.2f\n",average);

    if(average<50)
    {
        printf("\nFail!\n");
    }
    else
    {
        printf("\nPass!\n");
    }

    return 0;
}
