#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employee_number,count=0,count_exceeding4000=0;
    float hrs_worked,ot_rate=150.0,ot_threshold=40.0,ot_payment,pct_exceeding_4000;

    printf("Enter employee number and hours worked (Enter -999 to end) : \n");

    while(1)
    {
        scanf("%d",&employee_number);

        if(employee_number==-999)
        {
            break;
        }

        scanf("%f",&hrs_worked);

        if (hrs_worked>ot_threshold)
        {
            ot_payment=(hrs_worked-ot_threshold)*(ot_rate+50.0);
        }
        else
        {
            ot_payment=(hrs_worked-ot_threshold)*ot_rate;
        }

        printf("Employee Number  : %d\n",employee_number);
        printf("Overtime Payment : %.2f\n",ot_payment);

        if(ot_payment>4000.0)
        {
            count_exceeding4000++;
        }

        count++;
    }

    pct_exceeding_4000=(float)count_exceeding4000/count*100.0;
    printf("\nPercentage of employees whose ot payment exceeds Rs.4000: %.2f%%\n",pct_exceeding_4000);

    return 0;
}
