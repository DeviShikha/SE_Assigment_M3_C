/*
2. WAP of Addition, Subtraction, Multiplication and Division using
Switch case.(Must Be Menu Driven)..?
*/

#include <stdio.h>
main()
{
    int i,arr[2];
    char sum;
    
    for(i=0;i<2;i++)
    {
        printf("enter the number :");
        scanf("%d",&arr[i]);
    }
    
    printf("\nenter A for Addition");
    printf("\nenter B for Subtraction");
    printf("\nenter C for Multiplication");
    printf("\nenter D for Division");
    printf("\nenter your sum :");
    scanf(" %c",&sum);
    
    switch(sum)
    {
        case 'A' : printf(" Addition %d",arr[0]+arr[1]);
        break;
        case 'B' : printf(" Subtraction %d",arr[0]-arr[1]);
        break;
        case 'C' : printf(" Multiplication %d",arr[0]*arr[1]);
        break;
        case 'D' : printf(" Division %d",arr[0]/arr[1]);
        break;
        default : printf("try agan");
        break;
    }
    return 0;
}
