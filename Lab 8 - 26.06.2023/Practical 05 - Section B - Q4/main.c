#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeenumber,count=0;
    float basicsalary;

    printf("Enter employee number and basic salary (Enter -999 to end) : \n");

    while(1)
    {
        scanf("%d",&employeenumber);

        if (employeenumber==-999)
        {
            break;
        }

        scanf("%f",&basicsalary);

        if (basicsalary>=5000.0)
        {
            count++;
        }
    }

    printf("\nNumber of employees with basic salary >= 5000 : %d\n",count);

    return 0;
}
