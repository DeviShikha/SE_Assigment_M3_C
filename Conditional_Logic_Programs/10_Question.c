//10. WAP to check whether a number is negative, positive or zero..?

#include <stdio.h>
main()
{
    int n;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    if(n>0){
        printf("%d is positive number",n);
    } else if(n<0){
        printf("%d is negative number",n);
    } else {
        printf("%d is zero number",n);
    }
    
    return 0;
}
