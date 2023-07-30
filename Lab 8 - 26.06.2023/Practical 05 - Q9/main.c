#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ASCII values for letters A to Z : \n");

    char letter;

    for(letter='A';letter<='Z';letter++)
    {
       printf("%c : %d \n",letter,letter);
    }

    return 0;
}
