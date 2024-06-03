/*
6. WAP to make addition, Subtraction and multiplication of two matrix
using 2-D Array
*/

#include <stdio.h>
main()
{
    int i,j,k,m1[3][3],m2[3][3],mul[3][3];



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("input m1[%d][%d] :",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    
        printf("\n...............................matrix-1......................\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",m1[i][j]);
        }
        printf("\n");
    }
    
    

    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("input m2[%d][%d] :",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    
    printf("\n...............................matrix-2......................\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",m2[i][j]);
        }
        printf("\n");
    }
    

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j];
            for(k=0;k<3;k++)
            {
                mul[i][j]+=(m1[i][j]*m2[i][j]);
            }
        }
    }
    
    printf("\n.....................matrix-1 * matrix-2......................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

