#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1;
    float var2;
    double var3;
    char var4;

    printf("Input a char value  : ");
    scanf("%c",& var4);
    printf("Input an int value  : ");
    scanf("%d",& var1);
    printf("Input a float value : ");
    scanf("%f",& var2);
    printf("Input a double value: ");
    scanf("%lf",& var3);

    printf("\nInt value   : %d \n", var1);
    printf("Float value : %f \n", var2);
    printf("Double value: %f \n", var3);
    printf("Char value  : %c \n", var4);
}
