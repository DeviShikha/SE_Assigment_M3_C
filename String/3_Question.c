/*Write a program in C to print individual characters of a string in reverse
order*/
#include <stdio.h>
main() 
{
    char str[10];
    int l,i;

    
    printf(" Enter a string: ");
    scanf("%[^\n]", str);

    
     l= 0;
    while (str[l]!=0) 
	{
        l++;
    }

    
    printf(" reverse");
    for (i=l-1;i>=0;i--)
	 {
        printf(" %c ",str[i]);
    }

}

