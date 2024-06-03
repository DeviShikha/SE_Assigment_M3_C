/*
19. Patterns:
A 
A B 
A B C 
A B C D 
A B C D E
*/

#include <stdio.h>
main()
{
    int i,c;
    char ch='A';
    int rows=5;

    
    
    for(i=1;i<=rows;i++)
    {
        ch = 'A';
        for(c=1;c<=i;c++)
        {
            printf("%c ",ch);
            ch++;
        } 
        
        printf("\n");
        ch++;

    }

    return 0;
}
