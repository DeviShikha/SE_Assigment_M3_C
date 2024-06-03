
//20. Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary....?


#include <stdio.h>
main()
{
    float salary,premium_insurance,remaining_salary,installment_loan;
    
    printf("\n monthly salary from the user : ");
    scanf("%f",&salary);
    printf("\n.......................................\n");
    
    premium_insurance = 0.10 * salary;
    
    printf("the percenteg of premium insurance : %.2f",premium_insurance);
    printf("\n..........................................\n");
    
    remaining_salary = salary - premium_insurance;
    
    printf("the remaining salary : %.2f",remaining_salary);
    printf("\n..............................................\n");
    
    installment_loan = 0.10 * remaining_salary;
    
    printf("the installment loan : %.2f",installment_loan);
    printf("\n...............................................\n");
    
    remaining_salary -= installment_loan;
    
    printf("remaining salary after installment loan : %.2f", remaining_salary);
    
    
    return 0;
}
