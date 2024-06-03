/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/
#include<stdio.h>
main()
{
	float hra,da,gross_salar;
	int basic_salary;
	printf("\n\n\t Enter basic salary : ");
	scanf("%d",&basic_salary);
	if(basic_salary<=10000)
	{
		hra=basic_salary*25/100;
		da=basic_salary*90/100;
		gross_salar=basic_salary+hra+da;
		printf("\n\n\t Gross salary : %.2f ",gross_salar);
	}
	else if (basic_salary<=20000)
	{
		hra=basic_salary*30/100;
		da=basic_salary*95/100;
		gross_salar=basic_salary+hra+da;
		printf("\n\n\t Gross salary : %.2f ",gross_salar);
	}
	
	else
	{
		hra=basic_salary*20/100;
		da=basic_salary*80/100;
		gross_salar=basic_salary+hra+da;
		printf("\n\n\t Gross salary : %.2f ",gross_salar);
	}
	
	
}
