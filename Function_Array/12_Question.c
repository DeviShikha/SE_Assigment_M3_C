//12. WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name : ");
		scanf("%s",&name[i][20]);
	}
	printf("name[1] : %s",name[1]);
	printf("name[2] : %s",name[2]);
	printf("name[3] : %s",name[3]);
	printf("name[4] : %s",name[4]);
	printf("name[5] : %s",name[5]);
}
