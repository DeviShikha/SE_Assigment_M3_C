/*
16. Calculate the Sum of Natural Numbers Using the While Loop..?
*/

#include <stdio.h>
main()
{
    int i,n,sum=0;
    printf("enter the positive number :");
    scanf("%d",&n);
    
    i=1;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
       
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

