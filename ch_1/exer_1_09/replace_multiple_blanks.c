#include <stdio.h>

main() {
    int c, sp;
    sp = 0;
    while((c = getchar()) != EOF) {
        if(c == ' '){
            ++sp; //if c is black or a space, it increments sp
        } else {
            if(sp > 0){
                putchar(' '); //if sp is above 0, print a single space to compress multiple spaces
                sp = 0; //reset sp
            }
            putchar(c); //print current c
        }
    }
}
