//24.Accept 5 employees name and salary and count average and total
//salary ...?

#include <stdio.h>
main()
{
    char name[5][50];
    float salary1,salary2,salary3,salary4,salary5;
    float total_salary,average_salary;
    
    printf("enter the 1 employees name : \n");
    scanf("%s",&name);
    printf("enter the 2 employees name : \n");
    scanf("%s",&name);
    printf("enter the 3 employees name : \n");
    scanf("%s",&name);
    printf("enter the 4 employees name : \n");
    scanf("%s",&name);
    printf("enter the 5 employees name : \n");
    scanf("%s",&name);
    
    printf("\n.........................................\n");
    
    printf("enter the 1 employees salary : \n");
    scanf("%f",&salary1);
    printf("enter the 2 employees salary : \n");
    scanf("%f",&salary2);
    printf("enter the 3 employees salary : \n");
    scanf("%f",&salary3);
    printf("enter the 4 employees salary : \n");
    scanf("%f",&salary4);
    printf("enter the 5 employees salary : \n");
    scanf("%f",&salary5);
    
    printf("\n..............................................\n");
    
    total_salary = salary1+salary2+salary3+salary4+salary5;
    printf("the total salary of employees : %.2f",total_salary);
    
    printf("\n...............................................\n");
    
    average_salary = total_salary/5.0;
    printf("the average salary of the employees : %.2f",average_salary);
    
    
    return 0;
}

