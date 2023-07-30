#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],x,positives=0,negatives=0,zeros=0;

    printf("Input 10 numbers : \n");

    for(x=0;x<10;x++)
    {
        scanf("%d",&numbers[x]);

        if(numbers[x]>0)
        {
            positives++;
        }
        else if (numbers[x]<0)
        {
            negatives++;
        }
        else
        {
            zeros++;
        }
    }

    printf("\nNumber of positive numbers : %d\n",positives);
    printf("Number of negative numbers : %d\n",negatives);
    printf("Number of zeros : %d\n",zeros);

    return 0;
}
