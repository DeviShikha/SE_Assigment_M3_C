/*Write a program in C to find the length of a string without using
libraryfunctions*/
#include <stdio.h>
main() 
{
    char str[100];
    int l;

    
    printf("\n\n\t Enter a string: ");
    scanf("%s", str);

    l=0;
    while (str[l]!=0) 
	{
        l++;
    }

    printf("\n\n\t Length of string: %d",l);
}

