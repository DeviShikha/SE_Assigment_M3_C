//27.Convert days into months...?

#include <stdio.h>

main()
{
    int days;
    float months;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    months = days / 30.44;

    printf("Approximately %.2f months\n", months);

    return 0;
}

