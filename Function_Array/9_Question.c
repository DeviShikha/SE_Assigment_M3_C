// 9. WAP to show difference between Structure and Union...?



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
	printf("Enter a Student id : ");
	scanf("%d",&S.std_id);
	printf("Enter a Student Name : ");
	scanf("%s",&S.std_name);
	printf("Enter a Student Department : ");
	scanf("%s",&S.std_dep);
	printf("Enter a Student Persontage : ");
	scanf("%d",&S.std_per);
	
	printf("\n................................");
	printf("\n Student Id : %d",S.std_id);
	printf("\n Student Name : %s",S.std_name);
	printf("\n Student Department : %s",S.std_dep);
	printf("\n Student Persontage : %d",S.std_per);
		
}
