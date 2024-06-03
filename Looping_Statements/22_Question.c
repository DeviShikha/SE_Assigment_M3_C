/* 22. Accept 3 numbers from user using while loop and check each numbers
 palindrome..? */

 #include <stdio.h>

int isPalindrome(int num);

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Checking if %d is a palindrome: %s\n", num1, isPalindrome(num1) ? "Yes" : "No");
    printf("Checking if %d is a palindrome: %s\n", num2, isPalindrome(num2) ? "Yes" : "No");
    printf("Checking if %d is a palindrome: %s\n", num3, isPalindrome(num3) ? "Yes" : "No");

    return 0;
}

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}
