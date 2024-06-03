// 5. Check Number Is Positive or Negative...?



#include <stdio.h>
main()
{
    int n1,n2;
    char Select;
    
    printf("write the first number1 : ");
    scanf("%d",&n1);
    printf("write the first number2 : ");
    scanf("%d",&n2);
    
    printf("\n.................................");
    
    printf("\n - is the Negative");
    printf("\n + is the Positive");
    
    printf("\n.................................");
    
    printf("\nSelect any operator: ");
    scanf(" %c",&Select);
    
    if(Select == '+')
    {
        printf("this condition is Positive");
    } else{
        printf("this condition is Negative");
    }
    
    return 0;
}
