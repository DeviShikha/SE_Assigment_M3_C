//25.Accept 5 expense from user and find average of expense...?

#include <stdio.h>
main()
{
    float expense1,expense2,expense3,expense4,expense5; 
    float average, total_expense;
    
    printf("enter the expense 1 : ");
    scanf("%f",&expense1);
    printf("enter the expense 2 : ");
    scanf("%f",&expense2);
    printf("enter the expense 3 : ");
    scanf("%f",&expense3);
    printf("enter the expense 4 : ");
    scanf("%f",&expense4);
    printf("enter the expense 5 : ");
    scanf("%f",&expense5);
    
    printf("\n.............................\n");
    
    total_expense = expense1+expense2+expense3+expense4+expense5;
    average = total_expense/5.0;
    
    printf("the total expense : %.2f",total_expense);
    printf("\n.........................................\n");
    printf("the average of the expense : %.2f",average);
    return 0;
}

