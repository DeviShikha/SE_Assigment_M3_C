//Write a program in C to copy one string to another string
#include <stdio.h>

int main()
 {
    char a[20], b[20];
    int i;
	 printf(" Enter a string: ");
    scanf("%s",a);
	for (i=0;a[i]!=0;i++)
	 {
        b[i]=a[i];
    }
    b[i]=0; 
    printf("Copied string: %s", b);

}

