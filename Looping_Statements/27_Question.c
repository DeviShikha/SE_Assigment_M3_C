/* 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n */

#include<stdio.h>
main()
{
	
	
	int n, i, j;
	char c;
	
	printf("\n\n\t Input a Number for series : ");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
		printf("%d/%d", i, i+1);
		 if (i%2==0 && i!=n)
		{
			printf(" + ");
		}
		else if (i%2!=0 && i!=n)
		{
			printf(" - ");
		}	
	}
	
	printf("\n\n\t Enter R for Reverse Series : ");
	scanf(" %c",&c);
	
	if (c=='R') 
	{
        for (i=n;i>=1;i--) 
	  {
            printf("%d/%d", i, i + 1);
            if (i%2==0 && i!=1) 
		{
                printf(" + ");
            } 
		else if (i!=1) 
		{
                printf(" - ");
            }
        }
      }
}
