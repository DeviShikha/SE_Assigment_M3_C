//9. Find circumference of Triangle formula : triangle = a + b + c..?


#include <stdio.h>
main()
{
    float triangle,a,b,c;
    printf("enter the value of a :");
    scanf("%f",&a);
    printf("enter the value of b :");
    scanf("%f",&b);
    printf("enter the value of c :");
    scanf("%f",&c);
    
    triangle = a+b+c;
    
    printf("the value of triangle : %.2f",triangle);
    
    return 0;
}

