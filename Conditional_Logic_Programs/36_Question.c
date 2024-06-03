/*36.Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
main()
{
	int customer_id,unit;
	float charge;
	char name[20];
	printf("\n\t Enter customer id : ");
	scanf("%d",&customer_id);
	printf("\n\t Enter customer Name : ");
	scanf("%s",&name);
	printf("\n\t Enter usiing unit : ");
	scanf("%d",&unit);
	if(unit>50)
	{charge=unit*0.50+unit;
	printf("\n\n\t total bill =%.2f",charge);
	}
	else if(unit>100)
	{charge=unit*0.75+unit;
	printf("\n\n\t total bill =%.2f",charge);
	}
	else if(unit>250)
	{charge=unit*1.20+unit;
	printf("\n\n\t total bill =%.2f",charge);
	}
	else
	{charge=unit*1.50+unit;
	printf("\n\n\t total bill =%.2f",charge);
	}
}
	
