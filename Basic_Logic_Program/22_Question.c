//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P



#include <stdio.h>

main() {
    double principal, rate, time, amount, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%lf", &time);

    amount = principal * (1 + rate / 100, time);

    compoundInterest = amount - principal;

    printf("Amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest after %.2lf years: %.2lf\n", time, compoundInterest);

    return 0;
}

