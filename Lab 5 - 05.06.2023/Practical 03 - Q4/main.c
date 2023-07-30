#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    float pi=3.14159;

    printf("Enter the radius of the circle(cm) : ");
    scanf("%f",&radius);

    printf("\nDiameter of the circle is %.2f",radius*2);
    printf("\nCircumference of the circle is %.2f",2*pi*radius);
    printf("\nArea of the circle is %.2f\n",pi*(radius*radius));

    return 0;
}
