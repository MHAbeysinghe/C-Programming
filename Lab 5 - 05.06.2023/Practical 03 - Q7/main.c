#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    float basic_salary,monthly_sales,gross_monthly_remuneration;
    char city;

    printf("Enter C if you work in Colombo : ");
    scanf("%c",&city);
    printf("Enter the basic salary : ");
    scanf("%f",&basic_salary);
    printf("Enter years of service : ");
    scanf("%d",&year);
    printf("Enter the monthly sales : ");
    scanf("%f",&monthly_sales);

    if(year>5)
        gross_monthly_remuneration=basic_salary+(basic_salary*0.10);
    else
        gross_monthly_remuneration=basic_salary;

    if(city=='C')
        gross_monthly_remuneration=gross_monthly_remuneration+2500;

    if(monthly_sales<25000)
        gross_monthly_remuneration=gross_monthly_remuneration+(monthly_sales*0.10);
    else if(monthly_sales<50000)
        gross_monthly_remuneration=gross_monthly_remuneration+(monthly_sales*0.12);
    else
        gross_monthly_remuneration=gross_monthly_remuneration+(monthly_sales*0.15);

    printf("\nGross Monthly Remuneration : %.2f\n",gross_monthly_remuneration);

    return 0;
}
