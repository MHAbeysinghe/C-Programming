#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=0;
    float prices[10],sum=0.0,avg;

    printf("Enter the prices of 10 items : \n");

    for(x=0;x<10;x++)
    {
        scanf("%f",&prices[x]);
        sum += prices[x];

        if(prices[x]>200.0)
        {
            count++;
        }
    }

    avg=sum/10.0;

    printf("\nAverage value of an item : %.2f\n",avg);
    printf("Number of items with a price greater than 200 : %d\n",count);

    return 0;
}
