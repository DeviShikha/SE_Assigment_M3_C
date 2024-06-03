// 4. WAP to print table up to given numbers..?

#include <stdio.h>
main()
{
    int i,number;
    printf("enter the number you want : ");
    scanf("%d",&number);
    
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",number,i,number*i);
    }
    return 0;
}
