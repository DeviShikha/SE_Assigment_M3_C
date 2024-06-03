/*
17. Write a C program to check whether a triangle can be formed with the given
values for the angles.

*/


#include <stdio.h>
main()
{
    int n1,n2,n3;
    
    printf("enter the angle: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    
    if(n1+n2+n3==180)
    {
        printf("this is triangle");
    }else{
        printf("this is not tringle");
    }
    
    return 0;
}
