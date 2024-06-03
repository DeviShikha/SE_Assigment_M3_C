/*
7. WAP to print number in reverse order e.g.: number = 64728 --->
reverse = 82746..?
*/


#include <stdio.h>
main()
{
    int n,rev,rem=0;
    
    printf("enter the number :");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rev=n%10;
        rem=rem*10+rev;
        
        n=n/10;
    }
    
      printf("Reversed number : %d", rem);

    return 0;
}
