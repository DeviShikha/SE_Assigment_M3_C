//12. WAP to find maximum number among 3 numbers using ternary
//operator...?


#include <stdio.h>
main()
{
    int num1,num2,num3,max;
    
    printf("enter the number1 :");
    scanf("%d",&num1);
    printf("enter the number2 :");
    scanf("%d",&num2);
    printf("enter the number3 :");
    scanf("%d",&num3);
        
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    
    if((max))
    {
        printf(" %d  value is max",max);
    }
    
    
    return 0;
}
