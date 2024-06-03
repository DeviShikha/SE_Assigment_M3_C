/*
19. Patterns:
1
2 3 
4 5 6 
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>
main()
{
    int i,c,num=1;

    
    
    for(i=1;i<=5;i++)
    {
        for(c=1;c<=i;c++)
        {
            printf("%d ",num);
            num++;
        } 
        
        printf("\n");
    }

    return 0;
}
