/*
16. Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot

*/

#include <stdio.h>
main()
{
    int Temp;
    
    printf("input the temperature in centigrade :");
    scanf("%d",&Temp);
    
    
   if(Temp < 0)
   {
       printf("then Freezing weather");
   } else if(Temp<10){
       printf("then Very Cold weather");
   } else if(Temp<20){
       printf("then Cold weather");
   } else if(Temp<30){
       printf("then Normal in Temp");
   } else if(Temp<40){
       printf("then Its Hot");
   } else {
       
        if(Temp >=40)
             printf("then Its very Hot");
   } 
   
    return 0;
}
