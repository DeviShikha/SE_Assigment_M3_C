/*
37. WAP to show
i. Monday to Sunday using switch case
*/


#include <stdio.h>
main()
{
    int days=1;
    
        printf("enter the days :");
        scanf("%d",&days);
    switch(days)
    {
        case 1: printf("Monday\n");
                break;
        case 2: printf("Tuesday\n");
                break;
        case 3: printf("Wednesday\n");
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("Friday\n");
                break;
        case 6: printf("Saturday\n");
                break;
        case 7: printf("Sunday\n");
                break;
        default: printf("Invalid days\n"); 
                break;
        
    }
    return 0;
}
