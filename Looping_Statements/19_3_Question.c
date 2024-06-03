/*
19. Patterns:
        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *
*/

#include <stdio.h>
main()
{
    int i,c,k;
    int rows=5;
    
    
    for(i=0;i<rows;i++)
    {
        for(c=0;c<rows-i-1;c++)
        {
            printf("  ");
        } 
           for(k=0;k<2*i+1;k++)
           {
               printf("* ");
           }
        
        printf("\n");
    }
    
    
    
    return 0;
}
