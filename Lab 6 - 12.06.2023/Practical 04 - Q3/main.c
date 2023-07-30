#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float radius;
    const float pi=3.14159;

    printf("Enter 1 to calculate circumference of the circle\n");
    printf("Enter 2 to calculate area of the circle\n");
    printf("Enter 3 to calculate volume of the sphere\n\n");

    scanf("%d",&choice);

    printf("\nEnter the radius : ");
    scanf("%f",&radius);

    switch(choice)
    {
        case 1 : printf("\nCircumference = %.2f\n",2*pi*radius); break;
        case 2 : printf("\nArea = %.2f\n",pi*(radius*radius)); break;
        case 3 : printf("\nVolume = %.2f\n",(4.0/3.0)*pi*(radius*radius*radius)); break;

        default : printf("\nInvalid Number\n");

    }

    return 0;
}
