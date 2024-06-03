/*Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/
#include<stdio.h>
main()
{
	int customer_id,unit;
	float p1,p2,p3,p4,p5;
	char name[20];
	printf("\n\t Enter customer id : ");
	scanf("%d",&customer_id);
	printf("\n\t Enter customer Name : ");
	scanf("%s",&name);
	printf("\n\t Enter usiing unit : ");
	scanf("%d",&unit);
	p1=unit*1;p3=unit*1.50;p4=unit*1.80;p5=unit*2;
	
	if(unit>800)
	printf("\n\t unit : %d  price : 2 total :%.2f",unit,p5);
	else if(unit>600)
	printf("\n\t unit : %d  price : 1.80 total :%.2f",unit,p4);
	else if(unit>350)
	printf("\n\t unit : %d  price : 1.50 total :%.2f",unit,p3);
	else
	printf("\n\t unit : %d  price : 1 total :%.2f",unit,p1);
}
