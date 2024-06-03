//4. WAP to make simple calculator (operation include Addition,
//Subtraction, Multiplication, Division, modulo) using conditional
//statement..?



#include <stdio.h>
main()
{
    int n1, n2;
	char choice;
	
	printf(" Input n1 : ");
	scanf("%d",&n1);
	printf("Input n2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ................................\n\n\t");
	printf(" Press + for Addition.\n\n\t");
	printf(" Press - for Subtraction.\n\n\t");
	printf(" Press * for Multiplication.\n\n\t");
	printf(" Press / for Division.\n\n\t");
	printf("\n\n\t ................................");
	printf(" Input your choice of operation : ");
	scanf(" %c",&choice);
	
	if(choice == '+')
	{
	    printf("the %d and %d is Addition",n1,n2);
	} else if(choice == '-')
	{
	    printf("the %d and %d is Subtraction",n1,n2);
	}else if(choice == '*')
	{
	    printf("the %d and %d is Multiplication",n1,n2);
	} else if(choice == '/')
	{
	    printf("the %d and %d is Division",n1,n2);
	} else {
	    printf("this choice operation is not define");
	}
    
    return 0;
}
