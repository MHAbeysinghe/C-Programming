#include <stdio.h>
#include <stdlib.h>

int main()
{
    char employeename[30];
    float basicsalary,newsalary,increment;

    printf("Enter employee name : ");
    scanf("%s",&employeename);
    printf("Enter basic salary : ");
    scanf("%f",&basicsalary);

    if(basicsalary<5000)
    {
        increment=0.05*basicsalary;
    }
    else if(basicsalary<10000)
    {
        increment=0.1*basicsalary;
    }
    else(basicsalary>=10000);
    {
        increment=0.15*basicsalary;
    }

    newsalary=basicsalary+increment;
    printf("\nEmployee name : %s",employeename);
    printf("\nNew salary : %.2f\n",newsalary);

    return 0;
}
