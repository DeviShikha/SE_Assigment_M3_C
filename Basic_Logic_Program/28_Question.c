//28.Convert years into days and months....?
#include <stdio.h>

main() {
    int days, years, months;
    
    printf("enter the years : ");
    scanf("%d",&years);
    
    months = years*12;
    days =  years*365;
    printf("\n...............................\n");
    
    printf("%d year %d month %d days",years,months,days);

    return 0;
}

