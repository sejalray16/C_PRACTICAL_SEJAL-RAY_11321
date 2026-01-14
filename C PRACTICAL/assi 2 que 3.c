#include <stdio.h>

int main() {
    int A, B, amountToPay;

    // Input
    printf("Enter the price of the gift and the value of the voucher: ");
    scanf("%d %d", &A, &B);

    // Condition check
    if (B >= A) {
        printf("Congratulations! The gift is free! 🪔🎁\n");
    } else {
        amountToPay = A - B;
        printf("Rohan needs to pay: Rs. %d\n", amountToPay);
    }

    return 0;
}
