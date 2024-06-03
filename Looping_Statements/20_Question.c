/*
20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50
*/

#include <stdio.h>
main()
{
    int i,o,colm=10,rows=5,num=01;
    
    for(i=1;i<=rows;i++)
    {
        for(o=1;o<=colm;o++)
        {
                    printf("%d ",num);
                    num++;
        }
     printf("\n");   
    }
    
    return 0;
}
