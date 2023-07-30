#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,nodigits=0,originalnum,remainder,result=1,power,isArmstrongnum=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    originalnum=num;

    while(num!=0)
    {
        num/=10;
        nodigits++;
    }

    num= originalnum;

    for(i=0;i<nodigits;i++)
    {
        remainder=num%10;

        for(power=nodigits;power>=1;power--)
        {
            result*=remainder;
        }

        isArmstrongnum+=result;
        result=1;
        num/=10;
    }

    if(isArmstrongnum==originalnum)
        printf("\n%d is an Armstrong Number!\n",originalnum);
    else
        printf("\n%d is not an Armstrong Number!\n",originalnum);

    return 0;
}
