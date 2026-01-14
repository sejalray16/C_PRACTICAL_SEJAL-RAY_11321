
#include <stdio.h>
int reverseNumber(int num) {
    int rev = 0, digit;

    while (num > 0) {
        digit = num % 10;        // extract last digit
        rev = rev * 10 + digit; // build reversed number
        num = num / 10;         // remove last digit
    }

    return rev;
}

int main() {
    int number, reversed;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);

    printf("Reversed number: %d", reversed);

    return 0;
}
