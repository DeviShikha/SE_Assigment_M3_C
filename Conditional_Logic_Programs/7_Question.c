//7. Accept marks from user and check pass or fail..?


#include <stdio.h>
main()
{
    int Students;
    
    printf("Write the Students markes : ");
    scanf("%d",&Students);
    
    if(Students>=25)
    {
        printf("this students is pass");
    } else
    {
        printf("this students is fail");
    }
    
    
    return 0;
}
