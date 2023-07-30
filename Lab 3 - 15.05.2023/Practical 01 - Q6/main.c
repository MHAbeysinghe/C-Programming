#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    int byear, age;

    printf("Enter student name : ");
    scanf("%s",&name);
    printf("Enter student birth year : ");
    scanf("%d",&byear);

    age = 2023-byear;

    printf("\nStudent name : %s",name);
    printf("\nAge : %d \n",age);
}
