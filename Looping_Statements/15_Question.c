/*
15.Calculate sum of 10 numbers using of while loop.?
*/

#include <stdio.h>
main()
{
    int i,sum=0,num;
    
    i=0;
    while(i<=10)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
        i++;
    }
    printf("sum of the 10 number : %d \n",sum);
    return 0;
}
