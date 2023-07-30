#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[10],min,max,avg,total=0;
    int i;

    for(i=0;i<10;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%f",&numbers[i]);

        total+=numbers[i];

    }

    min=numbers[0];
    max=numbers[0];

    for(i=0;i<10;i++)
    {
        if(numbers[i]<min)
            min=numbers[i];
        if(numbers[i]>max)
            max=numbers[i];

    }

    avg=total/10;

    printf("\nMinimum value : %.2f\n",min);
    printf("\nMaximum value : %.2f\n",max);
    printf("\nAverage value : %.2f\n",avg);

    printf("\nReversed order of values : ");

    for(i=9;i>=0;i--)
    {
        printf("%.2f ",numbers[i]);
    }

    printf("\n");



    return 0;
}
