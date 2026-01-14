#include <stdio.h>

int main() {
    int N;           // Total number of clovers
    int totalLeaves; // Total leaves collected

    // Input
    printf("Enter the total number of clovers found: ");
    scanf("%d", &N);

    // Calculation
    totalLeaves = (N - 1) * 3 + 4;

    // Output
    printf("Total number of leaves collected: %d\n", totalLeaves);

    return 0;
}
