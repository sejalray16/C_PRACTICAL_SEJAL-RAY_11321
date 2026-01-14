#include <stdio.h>

int main() {
    // Printing the header with a decorative border
    printf("*************************************************\n");
    printf("*\t\tRIYA'S FIREWORKS\t\t*\n");
    printf("*\t    Light Up Your Diwali! \t\t*\n");
    printf("*************************************************\n\n");

    // Table Headers
    printf("ITEM\t\t\tQTY\t\tPRICE\n");
    printf("----\t\t\t---\t\t-----\n");

    // Item List
    printf("Sparklers (Box)\t\t5\t\tRs. 250\n");
    printf("Flower Pots\t\t2\t\tRs. 400\n");
    printf("Ground Wheels\t\t10\t\tRs. 150\n");
    printf("Sky Rockets\t\t1\t\tRs. 500\n");

    // Total and Footer
    printf("\n-------------------------------------------------\n");
    printf("TOTAL AMOUNT:\t\t\t\tRs. 1300\n");
    printf("-------------------------------------------------\n");
    
    // Final greeting and the alert beep (\a)
    printf("\n\t  WISHING YOU A SAFE DIWALI!! \a\n");
    printf("*************************************************\n");

    return 0;
}
