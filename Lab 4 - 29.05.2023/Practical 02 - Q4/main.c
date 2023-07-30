#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Enter the temperature in degrees Fahrenheit : ");
    scanf("%f",&f);

    c=((float)5/9)*(f-32);

    printf("The temperature in degrees Celsius : %.2fC\n",c);
}
