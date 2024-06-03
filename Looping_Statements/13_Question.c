/*
13.calculate the Factorial of a Given Number using while loop..?
*/

#include <stdio.h>
main()
{
    int i,n,facto=1;
    
    printf("enter the given number :");
    scanf("%d",&n);
    
    i=1;
    while(i<=n)
    {
        facto*=i;
        i++;
    }
    printf("this is Factorial number : %d",facto);
    return 0;
}
