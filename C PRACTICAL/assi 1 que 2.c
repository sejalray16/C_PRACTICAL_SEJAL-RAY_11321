#include <stdio.h>

int main() {
    char ch;         // Student's initial
    int days;        // Number of overdue days
    float rate;      // Fine rate per day
    float fine;      // Total fine

    // Input
    printf("Enter student's initial: ");
    scanf(" %c", &ch); // Notice the space before %c to consume newline

    printf("Enter number of overdue days: ");
    scanf("%d", &days);

    printf("Enter fine rate per day: ");
    scanf("%f", &rate);

    // Calculate total fine
    fine = days * rate;

    // Print formatted receipt
    printf("\n*** Midnight Library Fine Receipt ***\v");
    printf("Student Initial: %c\v", ch);
    printf("Overdue Days: %05d, Fine: %.2f\n", days, fine);

    return 0;
}
