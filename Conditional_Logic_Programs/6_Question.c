//6. Find the Character Is Vowel or Not..?


#include <stdio.h>
main()
{
    char Vowel;
    
    printf("write the Vowel : ");
    scanf("%c",&Vowel);
    
    if(Vowel == 'A'||'a')
        printf("Vowel");
    else if(Vowel == 'E' || 'e')
        printf("Vowel");
    else if(Vowel == 'I' || 'i')
        printf("Vowel");
    else if(Vowel == 'O' || 'o')
        printf("Vowel");
    else if(Vowel == 'U' || 'u')
        printf("Vowel");
    else {
        printf("this is not Vowel");
    }
    
    
    
    
    return 0;
}
