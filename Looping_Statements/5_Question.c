// 5. WAP to print factorial of given number..?


#include <stdio.h>
main()
{
    int i,n,facto=1;
    printf("enter the factorial :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        facto=facto*i;
    }
    printf("factorial of this number : %d",facto);
    
    return 0;
}
