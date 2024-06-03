/*
31. Write a program in C to read any Month Number in integer and display the
number of days for this month...?
*/

#include <stdio.h>

int main() {
    int month, year, days;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month) {
        case 1:
            days = 31;
            printf("January has %d days.\n", days);
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            printf("February has %d days.\n", days);
            break;
        case 3:
            days = 31;
            printf("March has %d days.\n", days);
            break;
        case 4:
            days = 30;
            printf("April has %d days.\n", days);
            break;
        case 5:
            days = 31;
            printf("May has %d days.\n", days);
            break;
        case 6:
            days = 30;
            printf("June has %d days.\n", days);
            break;
        case 7:
            days = 31;
            printf("July has %d days.\n", days);
            break;
        case 8:
            days = 31;
            printf("August has %d days.\n", days);
            break;
        case 9:
            days = 30;
            printf("September has %d days.\n", days);
            break;
        case 10:
            days = 31;
            printf("October has %d days.\n", days);
            break;
        case 11:
            days = 30;
            printf("November has %d days.\n", days);
            break;
        case 12:
            days = 31;
            printf("December has %d days.\n", days);
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
