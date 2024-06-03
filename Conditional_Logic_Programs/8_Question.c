//8. WAP to accept the height of a person in centimeters and categorize the
// person according to their height.


#include <stdio.h>
main()
{
    float height;
    
    printf("write the person centimeters :");
    scanf("%f",&height);
    
    if (height < 150)
    {
        printf("the person is short");
    } else if(height >= 150 && height < 180 )
    {
        printf("the person is average height");
    } else
    {
        printf("the person is tall");
    }
    
    
    return 0;
}
