/*
17 WAP to show difference between Structure and Union.
*/

#include<stdio.h>

struct student 
{
	int std_id;
	char std_name[50];
	char std_dep[20];
	int std_per;
	
}S;

main()
{
	printf("\n\n\t Enter a Student id : ");
	scanf("%d",&S.std_id);
	printf("\n\n\t Enter a Student Name : ");
	scanf("%s",&S.std_name);
	printf("\n\n\t Enter a Student Department : ");
	scanf("%s",&S.std_dep);
	printf("\n\n\t Enter a Student Persontage : ");
	scanf("%d",&S.std_per);
	
	printf("\n................................");
	printf("\n\n\t Student Id : %d",S.std_id);
	printf("\n\n\t Student Name : %s",S.std_name);
	printf("\n\n\t Student Department : %s",S.std_dep);
	printf("\n\n\t Student Persontage : %d",S.std_per);
		
}
