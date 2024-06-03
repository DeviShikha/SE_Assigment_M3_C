//6. WAP to print Fibonacci series up to given numbers..?

#include <stdio.h>
main()
{
    int i,a=0,b=1,c,n;
        printf("enter the Fibonacci series : ");
        scanf("%d",&n);
        
        printf("%d \t %d \t",a,b);
        
        for(i=1;i<n;i++)
        {
            c=a+b;
            printf("%d \t",c);
            a=b;
            b=c;
            c++;
        }
    return 0;
}
