#include <stdio.h>

int main(void) {
    double num;

    printf("Floating Fortune Teller\n");
    printf("=======================\n\n");

    /* Prompt and read input as double */
    printf("Enter a floating-point number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nHere are different representations of the number:\n\n");

    /* Print each format specifier label (use %% to print a literal %) and the result */
    printf("1) %%f       -> %f\n", num);
    printf("2) %%.1f     -> %.1f\n", num);
    printf("3) %%.2f     -> %.2f\n", num);
    printf("4) %%.3f     -> %.3f\n", num);
    printf("5) %%6.2f    -> %6.2f\n", num);
    printf("6) %%8.3f    -> %8.3f\n", num);
    printf("7) %%0.2f    -> %0.2f\n", num);
    printf("8) %%10.4f   -> %10.4f\n", num);
    printf("9) %%e       -> %e\n", num);
    printf("10) %%E      -> %E\n", num);
    printf("11) %%g      -> %g\n", num);
    printf("12) %%G      -> %G\n", num);

    printf("\nNotes:\n");
    printf("- %%f prints fixed-point notation.\n");
    printf("- %%e and %%E print scientific notation.\n");
    printf("- %%g and %%G choose the more compact of %%f/%%e (or %%F/%%E).\n");
    printf("- Field width and precision (like %%6.2f or %%10.4f) control padding and decimals.\n");

    return 0;
}
