//11. WAP to find number is even or odd using ternary operator..?


#include <stdio.h>
main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    if(a%2==0)
    {
        printf("%d value is even",a);
    }else
    {
        printf("%d value is odd",a);
    }
    
    return 0;
}
