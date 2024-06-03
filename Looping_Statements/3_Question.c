/*
3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/


#include <stdio.h>
main()
{
    int i,even=0,odd=0,sum1,sum2;
    
    for(i=1;i<10;i++)
    {
        printf(" %d",i);
        
        if(i%2==0)
        {
            even++;
        } else{
            odd++;
        }
        printf("\n");
    }
    printf("even : %d\n",even);
    printf("odd : %d\n",odd);
    
      for(i=1;i<10;i++)
    {
        printf(" %d",i);
        
        if(i%2==0)
        {
            sum1=sum1+i;
        } else{
            sum2=sum2+i;
        }
        printf("\n");
    }
   printf("sum of even : %d\n",sum1);
   printf("sum of odd : %d\n",sum2);
    
    
    return 0;
}
