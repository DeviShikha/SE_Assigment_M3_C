//15.Convert school’s name in abbreviated form..?

#include <stdio.h>
main()
{
    char school_name[100];
    
    printf("\n\n Write your school's name : "),
    scanf("%s",&school_name);
    
    printf("\n................................\n");
    
    printf("My school's name is : %c",school_name[0]);
    
    return 0;
}
