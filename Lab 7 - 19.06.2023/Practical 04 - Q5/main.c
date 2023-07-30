#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Enter month number : ");
    scanf("%d",&days);
    switch(days)
    {
        case 1: printf("\nTotal number of days in the month : 31\n");break;
        case 2: printf("\nTotal number of days in the month : 28\n");break;
        case 3: printf("\nTotal number of days in the month : 31\n");break;
        case 4: printf("\nTotal number of days in the month : 30\n");break;
        case 5: printf("\nTotal number of days in the month : 31\n");break;
        case 6: printf("\nTotal number of days in the month : 30\n");break;
        case 7: printf("\nTotal number of days in the month : 31\n");break;
        case 8: printf("\nTotal number of days in the month : 31\n");break;
        case 9: printf("\nTotal number of days in the month : 30\n");break;
        case 10: printf("\nTotal number of days in the month : 31\n");break;
        case 11: printf("\nTotal number of days in the month : 30\n");break;
        case 12: printf("\nTotal number of days in the month : 31\n");break;

        default: printf("\nInvalid month number\n",days);
    }

    return 0;
}
