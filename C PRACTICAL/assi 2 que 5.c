#include <stdio.h>

int main() {
    int L;  // Level number
    int points;

    // Input
    printf("Enter the level number completed (1-5): ");
    scanf("%d", &L);

    // Using switch-case to decide rewards
    switch (L) {
        case 1:
            points = 10;
            break;
        case 2:
            points = 20;
            break;
        case 3:
            points = 30;
            break;
        case 4:
            points = 40;
            break;
        case 5:
            points = 50;
            break;
        default:
            printf("Invalid Level!\n");
            return 0; // Exit the program early
    }

    // Output
    printf("Rohan earned %d reward points! 🏆\n", points);

    return 0;
}
