/*
30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
minimum bill should be of Rs. 256/-..?
*/

#include <stdio.h>

int main() {
    float bill, final_bill;
    const float surcharge_rate = 0.18;
    const float minimum_bill = 256.0;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill > 800) {
        final_bill = bill + (bill * surcharge_rate);
    } else {
        final_bill = bill;
    }

    if (final_bill < minimum_bill) {
        final_bill = minimum_bill;
    }

    printf("The final bill amount is: Rs. %.2f\n", final_bill);

    return 0;
}
