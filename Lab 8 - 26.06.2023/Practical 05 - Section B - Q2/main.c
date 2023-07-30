#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10],x,sum=0,max,min;
    float avg;

    printf("Enter marks of 10 students:\n");

    for(x=0;x<10;x++)
    {
        scanf("%d",&marks[x]);

        sum+=marks[x];

        if(x==0)
        {
            max=marks[x];
            min=marks[x];
        }
        else
        {
            if (marks[x]>max)
            {
                max=marks[x];
            }
            if (marks[x]<min)
            {
                min=marks[x];
            }
        }
    }

    avg=(float)sum/10.0;

    printf("\nMaximum marks : %d\n",max);
    printf("Minimum marks : %d\n",min);
    printf("Average marks : %.2f\n",avg);

    return 0;
}
