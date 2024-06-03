/* 
14.Write a program in C to combine two strings manually..?
*/


#include<stdio.h>
#include<string.h>

main()
{
	char str1[20], str2[20];
	
	printf("\n\n\t Enter a name : ");
	scanf("%s",&str1);
	printf("\n\n\t Enter a last : ");
	scanf("%s",&str2);
	
	printf("\n\n\t after Combine two strings : %s",strcat(str1,str2));
	
}