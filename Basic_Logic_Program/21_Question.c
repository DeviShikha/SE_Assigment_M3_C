
//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable..?


#include <stdio.h>

main() {
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping using a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping without using a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
