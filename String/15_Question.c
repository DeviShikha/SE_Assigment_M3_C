// 15. Write a program in C to find the largest and smallest words in a string...?



#include<stdio.h>
#include<string.h>

main()
{
    int i, j, k, a, minIndex, maxIndex, max, min, len;
    char str1[100], sub[100][100], c;
    
    printf("\n\n\t Enter a sentence : ");
    gets(str1);
    
    while(str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=' ' && str1[k]!='\0')
        {
            sub[i][j]=str1[k];
            k++;
            j++;
        }
        sub[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }        
    }
    len=i;
    max=strlen(sub[0]);
    min=strlen(sub[0]);
    
	for(i=0;i<len;i++)
    {
       a=strlen(sub[i]);
       if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }    
    printf("\n\n\t Largest Word is : %s",sub[maxIndex]);
    printf("\n\n\t Smallest word is :  %s",sub[minIndex]);  
}
