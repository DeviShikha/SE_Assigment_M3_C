/*3. WAP to Find Area And Circumference of Circle
Area = 3.14 * radius * radius.
Circumference = 2 * 3.14 * radius.*/



#include <stdio.h>
main()
{
    float radius, Area , Circumference;
    float pi=3.14;
    
    printf("enter the radius of Area :");
    scanf("%f",&radius);
    
    Area = pi*radius*radius;
    Circumference = 2*pi*radius;
    
    printf("Area of Circle : %.2f\n",Area);
    printf("Circumference of circle : %.2f",Circumference);
    
    
    return 0;
}
