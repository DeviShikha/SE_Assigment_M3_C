// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)..?


#include <stdio.h>
main()
{
    int i,n,sum=1;
    printf("enter the number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("(%d*%d) + ",i,i);
    }
    return 0;
}
