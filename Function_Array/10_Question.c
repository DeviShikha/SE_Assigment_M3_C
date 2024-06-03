//10. WAP to perform Palindrome number using loop and function
#include <stdio.h>
main() 
{
    	int num, i;
        printf("\n\n Enter number %d: ", i + 1);
        scanf("%d", &num);
        int reversedNum = 0, originalNum = num;
        while (num > 0) 
		{
            reversedNum = reversedNum * 10 + num % 10;
            num /= 10;
        }
		if(originalNum==reversedNum)
			printf("\n %d is palindrome ",reversedNum);
		else
			printf("\n %d is not palindrome ",reversedNum);	
        i++;
}