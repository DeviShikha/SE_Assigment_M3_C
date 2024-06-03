// 24. 1 + 2 + 3 + 4 + 5 + ... + n..?

#include <stdio.h>
main()
{
    int i,n,sum=1;
    printf("enter the number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf(" %d +",i);
    }
    return 0;
}
