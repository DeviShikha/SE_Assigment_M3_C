//23. WAP to calculate swap 2 numbers with using of multiplication and
//division...?


#include <stdio.h>
main()
{
    float num1,num2;
    float division,multiplication;
    
    printf("Enter the number 1 : ");
    scanf("%f",&num1);
    printf("Enter the number 2 : ");
    scanf("%f",&num2);
    printf("\n.............................\n");
    
    multiplication = num1 * num2;
    
    printf("the multiplication of the numbers : %.2f",multiplication);
    printf("\n..............................\n");
    
    division = num1/num2;
    printf("the division of the numbers : %.2f",division);
    
    
    return 0;
}

