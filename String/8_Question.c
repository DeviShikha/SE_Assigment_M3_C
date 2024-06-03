/*Write a program in C to count the total number of vowels or consonants
in astring.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0,i;

    
    printf(" Enter a string: ");
    scanf("%s", str);

    
   

    
    for (int i = 0;str[i]!=0; i++)
	 {
        if (str[i] =='a') 
            vowels++;
        else if   (str[i] =='e')
        	vowels++;
        else if  (str[i] =='i')
        	vowels++;
        else if (str[i] =='o')
       		vowels++;
        else if (str[i] =='u')
       		vowels++;
        else 
            consonants++;
        
    }
    
    printf("vowels: %d", vowels);
    printf("\n consonants: %d", consonants);

    return 0;
}

