/*
14.Accept 5 numbers from user and find those numbers factorials..?
*/


#include <stdio.h>
main()
{
    int i,n=5,facto=1;
    
    for(i=1;i<=n;i++)
    {
        facto*=i;
    }
    printf("factorial of this number : %d",facto);

    
    return 0;
}
