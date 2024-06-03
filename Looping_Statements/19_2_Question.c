/*
19. Patterns:
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>
main()
{
    int i,c;
    char ch='A';
    
    for(i=1;i<=5;i++)
    {
        for(c=1;c<=i;c++)
        {
           printf("%c ",ch);
           ch++;
        }
        printf("\n");
    }
    
    
    
    return 0;
}
