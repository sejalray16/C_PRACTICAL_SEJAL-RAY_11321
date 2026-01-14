#include <stdio.h>

int main(void) {
    printf("=== Chef C's Magical Escape Show ===\n\n");

    /* New line */
    printf("1) New line (\\n):\n");
    printf("   This is line one.\n");
    printf("   This is line two.\n\n");

    /* Horizontal tab */
    printf("2) Tab (\\t):\n");
    printf("   Column1\tColumn2\tColumn3\n\n");

    /* Backslash */
    printf("3) Backslash (\\\\):\n");
    printf("   To print a single backslash you write \\\\ in the source; output: \\\n\n");

    /* Double and single quotes */
    printf("4) Double quote (\\\") and single quote (\\'):\n");
    printf("   He said: \"C is fun\" and it\'s true.\n\n");

    /* Alert (may beep if terminal supports it) */
    printf("5) Alert (\\a):\n");
    printf("   You may hear a beep now (if your terminal supports \\a).\a\n\n");

    /* Backspace (\\b) - removes previous character */
    printf("6) Backspace (\\b):\n");
    printf("   Example: Typing 'HelloX' then backspace removes X: HelloX\b!\n\n");

    /* Carriage return - moves cursor to the start of the current line */
    printf("7) Carriage return (\\r):\n");
    printf("   The text before \\r can be overwritten. Example:\n");
    printf("   1234567890\rEND\n\n");

    /* Form feed - page break (rarely visible on modern terminals) */
    printf("8) Form feed (\\f):\n");
    printf("   This text is before form feed.\fThis text is after form feed (behavior depends on device)\n\n");

    /* Vertical tab - vertical movement (display varies by terminal) */
    printf("9) Vertical tab (\\v):\n");
    printf("   Line one\vLine two (vertical tab between them)\n\n");

    /* Question mark escape - prints a question mark safely */
    printf("10) Question mark escape (\\?):\n");
    printf("   To be safe with some old C trigraph situations you can use \\?: Is this OK\\?\n\n");

    printf("=== End of Show ===\n");
    return 0;
}
