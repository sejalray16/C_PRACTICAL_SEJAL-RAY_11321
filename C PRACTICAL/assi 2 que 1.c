#include <stdio.h>

int main() {
    int A, B;   // Variables for morning and evening clouds

    // Input
    printf("Enter morning and evening cloud counts: ");
    scanf("%d %d", &A, &B);

    // Condition check
    if (B >= 3 * A) {
        printf("Rainy Weather 🌧️\n");
    } else {
        printf("Dry Weather ☀️\n");
    }

    return 0;
}
