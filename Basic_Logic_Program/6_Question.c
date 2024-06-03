//6. Find area of Triangle Formula : A = 1/2 × b × h


#include <stdio.h>
main()
{
    float area,hight,breath;
    printf("enter the value of breath :");
    scanf("%f",&breath);
    printf("enter the value of height :");
    scanf("%f",&hight);
    
    area = 0.5*breath*hight;
    
    printf("the Area of Triangle : %.3f",area);
    
    return 0;
}
