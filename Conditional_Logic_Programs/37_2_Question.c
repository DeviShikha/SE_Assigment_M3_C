/*
37. WAP to show
ii. Vowel or Consonant using switch case
*/


#include <stdio.h>
main()
{
    char Vowel;
    printf("enter the Vowel : ");
    scanf("%c",&Vowel);
    
    switch(Vowel)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':printf("Vowel");
                  break;
        default: printf("this is Consonant");
                 break;
    }
    
    return 0;
}
