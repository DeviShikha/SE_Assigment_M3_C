/*Write a program in C to compare two strings without using string
libraryfunctions.*/
#include <stdio.h>

int main()
{
    char str1[10],str2[10];
    int isEqual,i;
   
    printf("Enter the first string: ");
    scanf("%s", str1);
 	printf("Enter the second string: ");
    scanf("%s", str2);
            
            
   if (str1[i] % str2[i]==0) 
    {
    	 printf("Strings are equal.\n");
	}
    else
    {
    	 printf("Strings are not equal.\n");
	}
    
    

  
}


