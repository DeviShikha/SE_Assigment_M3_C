
//19.Calculate compound interest..?


#include <stdio.h>
main()
{
    float  A, r;
    int P, n , t;
    
    printf("\n\n the no of amount : ");
    scanf("%d",&P);
   
    printf("\n\n Annual intrest in company : ");
    scanf("%f",&r);
    
    printf("\n\n number of time period : ");
    scanf("%d",&n);
    
    printf("\n\n how many year : ");
    scanf("%d",&t);
    printf("\n...........................\n");
    
    A = (P *(1 + r/n, n*t));
    
    printf("the future value of the investment after : %.2f",A);
    return 0;
}
