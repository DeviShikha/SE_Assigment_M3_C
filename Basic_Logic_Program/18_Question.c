
//18. Calculate person’s Annual salary..?

#include <stdio.h>
main()
{
    int salary, no_month, Annual_salary;
    
    printf("the person earn per month salary : ");
    scanf("%d",&salary);
    
    printf("the number of month : ");
    scanf("%d",&no_month);
    
    printf("\n...........................\n");
    
    Annual_salary = salary * no_month;
    
    printf("the Annual_salary is : %d",Annual_salary);
    
    return 0;
}
