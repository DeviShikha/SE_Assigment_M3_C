//Write a program in C to count the total number of words in a string.
#include <stdio.h>
main()
{
    char str[78];
    int i,a=0;
	printf(" Enter a string: ");
    scanf("%s",str);
    
    for (i=0;str[i]!=0;i++) 
	{
         a++;
    }
    printf(" count the total number of words in a string %d",a);
}

