//14.WAP to find the largest of three numbers...?


#include <stdio.h>
main()
{
    int a,s,d,largest;
    printf("enter the value :");
    scanf("%d %d %d",&a,&s,&d);
    
    largest = a;
    
    if(s > largest){
        largest = s;
    }
    
    if(d > largest){
        largest = d;
    }
    
    printf("the largest number : %d",largest);
    
    return 0;
}
