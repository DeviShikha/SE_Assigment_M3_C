//17. Calculate person’s insurance premium based on salary..?

#include <stdio.h>
main()
{
    int salary;
    float rate,Premium;
    
    printf("person isurance Premium salary : ");
    scanf("%d",&salary);
    printf("how many intrest rate you get : ");
    scanf("%f",&rate);
    printf("\n..........................\n");
    Premium = salary * rate;
    printf("the total intrest salary : %.2f",Premium);
    return 0;
}
