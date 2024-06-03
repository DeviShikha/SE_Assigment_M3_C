/*
19. Patterns:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include <stdio.h>
main()
{
    int i,c;
    
    for(i=1;i<=5;i++)
    {
        for(c=1;c<=i;c++)
        {
            if(c%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }
    
    
    
    return 0;
}
