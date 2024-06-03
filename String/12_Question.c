/*
12. Write a program in C to find the number of times a given word 'is'
appears in the given string...?
*/

#include <stdio.h>
#include <string.h>
int countWord(char *str, char *word);
main() 
{
	
	
    char str[1000], word[] = "is";
    int result;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    result = countWord(str, word);
    printf("'%s' appears %d times in the given string.\n", word, result);


}

int countWord(char *str, char *word) {
    int count = 0, wordLen = strlen(word);
    char *ptr = str;

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += wordLen;
    }

    return count;
}
