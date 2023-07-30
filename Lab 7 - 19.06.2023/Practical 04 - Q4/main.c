#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m;
    printf("Enter a Character : ");
    scanf("%c",&m);
    switch(m)
    {
        case 'A': printf("\nA is a vowel\n");break;
        case 'E': printf("\nE is a vowel\n");break;
        case 'I': printf("\nI is a vowel\n");break;
        case 'O': printf("\nO is a vowel\n");break;
        case 'U': printf("\nU is a vowel\n");break;
        case 'a': printf("\na is a vowel\n");break;
        case 'e': printf("\ne is a vowel\n");break;
        case 'i': printf("\ni is a vowel\n");break;
        case 'o': printf("\no is a vowel\n");break;
        case 'u': printf("\nu is a vowel\n");break;

        default: printf("\n%c is not a vowel\n",m);
    }

    return 0;
}
