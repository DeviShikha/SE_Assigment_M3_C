/*
6. WAP to make addition, Subtraction and multiplication of two matrix
using 2-D Array
*/

#include <stdio.h>
main()
{
    int i,j,a[3][3],b[3][3];
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n........................matrix-1.............................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n........................matrix-2.............................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\n..............matrix-1 - matrix-2............................\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]-b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
