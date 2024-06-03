/*
1. Write a program to find out the max number from given array using
function..?
*/

#include <stdio.h>
int main()
{
    int n[2],i;
    
    for(i=0;i<2;i++)
    {
        printf("enter the value :");
        scanf("%d",&n[i]);
    }
    
    if(n[0] > n[1])
    {
        printf("%d is max",n[0]);
    }else
    {
        printf("%d is max",n[1]);
    }
    return 0;
}
