#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance, time, avgspeed;
    printf("Enter the distance travelled (in meters) : ");
    scanf("%d",&distance);
    printf("Enter the time taken (in seconds) : ");
    scanf("%d",&time);

    avgspeed=distance/time;

    printf("\nAverage speed = %d ms-1\n",avgspeed);

    //The problem: we can't use decimal values & we can't get the output in decimals.
    //Why: because we are using int variables.
    //How to fix the problem: we can use float variables instead of int variables.
}
