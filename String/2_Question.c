//Write a program in C to separate individual characters from a string.
#include <stdio.h>
main()
{
    char str[78];
	printf(" Enter a string: ");
    scanf("%s",str);
    
    printf("  Individual ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf(" %c ", str[i]);
    }
}

