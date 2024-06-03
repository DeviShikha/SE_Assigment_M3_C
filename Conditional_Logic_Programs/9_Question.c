//9. C Program to Check Uppercase or Lowercase or Digit or Special Character...?

#include <stdio.h>
#include <ctype.h>
main()
{
    char Ch;
    
    printf("enter the Character : ");
    scanf("%c",&Ch);
    
    if(isupper(Ch))
    {
        printf("%c is Uppercase case",Ch);
    }    
    else if(islower(Ch))
    {
        printf("%c is Lowercase case",Ch);
    }    
    else if(isdigit(Ch))
    {
        printf("%c is Digit case",Ch);
    }
    else
    {
        printf("%c is Special case",Ch);
    }
    
    return 0;
}
