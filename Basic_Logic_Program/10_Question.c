//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)...?

#include <stdio.h>
main()
{
    float area,width,length,height;
    printf("enter the value of width :");
    scanf("%f",&width);
    printf("enter the value of length :");
    scanf("%f",&length);
    printf("enter the value of height :");
    scanf("%f",&height);
    
    area = 2*(width*length+height*length+height*width);
    
    printf("the area of rectangular prism : %.2f",area);
    
    return 0;
}

