#include <stdio.h>

main(void) {
    printf("value of the expression 'getchar() != EOF': %d", getchar() != EOF);
    //The value of the expression should be 0 when the EOF is accessed
    //TO access EOF, CTRL+Z on Windows and CTRL+D i Unix
    //Only when the expression is true is it 1
}

/* LOOK HERE:   printf("%3.0d %3.0f", c, c);
for some reason, d prints '1' and f prints '0'
why?*/
