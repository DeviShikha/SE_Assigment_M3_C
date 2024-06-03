//18. Write a C program to calculate profit and loss on a transaction..?


#include <stdio.h>
main()
{
    float profit,loss,cp,sp;
    
    printf("enter cost price :");
    scanf("%f",&cp);
    printf("enter selling price :");
    scanf("%f",&sp);
    
    if(sp > cp)
    {
        profit = sp - cp;
        printf("profit : %.2f",profit);
    } else if(cp > sp){
        loss = cp - sp;
        printf("loss : %.2f",loss);
    }else {
        printf("no profit : no loss");
    }
    return 0;
}
