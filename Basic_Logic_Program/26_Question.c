//26.Convert temperature Fahrenheit to Celsius...?
// C=5/9*(F-32)

#include <stdio.h>

main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}
