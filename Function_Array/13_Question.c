/*13. WAP to accept 5 numbers from user and check entered number is even or odd 
using of array*/


#include<stdio.h>
main()
{
	int num[5],i;
	printf("\n\n\t enter 5 number");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t enter num : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		if(num[i]%2==0)
		{
			printf("number is even.");
		}
		else
		{
			printf("number is not even.");
		}
			printf("\n\n");
	}	
} 