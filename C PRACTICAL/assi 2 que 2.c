#include <stdio.h>

int main() {
    int X, thirdSet;

    // Input
    printf("Enter the weight lifted in the 1st set (in kg): ");
    scanf("%d", &X);

    // Calculate weight for the 3rd set
    thirdSet = X + 20;

    // Output
    printf("Weight lifted in the 3rd set: %d kg\n", thirdSet);

    return 0;
}
