/*
14. Perform 2D matrix array..?
*/


#include <stdio.h>
int main()
{
    int i,j,s1[3][3],s2[3][3];
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the s1[%d][%d] :",i,j);
            scanf("%d",&s1[i][j]);
        }
    }
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the s2[%d][%d] :",i,j);
            scanf("%d",&s2[i][j]);
        }
    }
    
    printf("\n.....................matrix-1..............................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",s1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n.....................matrix-2..............................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",s2[i][j]);
        }
        printf("\n");

    }
    return 0;
}
