/*
6. Write a program in C to count the total number of alphabets, digits and
special characters in a string...?
*/


#include <stdio.h>
main() 
{
    char str[20];
    int i,alphabets=0, digits=0, specialChars=0;
    printf("Enter a string: ");
    scanf("%s",str);

    
    for (i=0;str[i]!=0;i++) 
	{
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
            alphabets++;
        }
        
        else if (str[i] >= '0' && str[i] <= '9')
		{
            digits++;
        }
        
        else
		{
            specialChars++;
        }
    }

    
    printf(" alphabets: %d",alphabets);
    printf(" digits: %d",digits);
    printf(" special characters: %d ",specialChars);

}

