/*12. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/


#include <stdio.h>
main()
{
    float student,apple;
    printf("enter the no of student :");
    scanf("%f",&student);
    
    apple = student*5;
    
    printf("total no of apple required : %f",apple);
    
    
    
    return 0;
}
