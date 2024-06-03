//29.Convert minutes into seconds and hours


#include <stdio.h>
main() {
    int minutes,seconds;
    float hours;
    
    printf("enter the minutes : ");
    scanf("%d",&minutes);
    
    seconds = minutes*60;
    hours = minutes/60.0;
    printf("\n...............................\n");
    
    printf(" %d minutes %d seconds %.2f hours",minutes,seconds,hours);

    return 0;
}
