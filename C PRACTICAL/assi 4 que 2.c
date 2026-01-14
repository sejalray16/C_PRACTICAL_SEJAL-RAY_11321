#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;               // extract last digit
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("The number is a Palindrome");
    else
        printf("The number is NOT a Palindrome");

    return 0;
}
