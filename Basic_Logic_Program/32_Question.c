//32.Accept 2 numbers and find out its sum check it size..?
#include<stdio.h>
main()
{
	int num1,num2,sum;
	
	printf("\n\n\t fist num Enter   : ");
	scanf("%d",&num1);
	printf("\n\n\t second num Enter : ");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\n\n\t sum :%d ",sum);
	printf("\n\n\t Size of sum : %d bytes", sizeof(sum));
}
	
