#include <stdio.h>

main() {
    int c, nl;
    nl = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n' && c == '\t' && c == " ");
            ++nl;
        printf("Count: %d\n", nl);
        // the comparisons, in order, checks if c is a newline, a tab, or a space, then incremented to nl when true.
    }
}
