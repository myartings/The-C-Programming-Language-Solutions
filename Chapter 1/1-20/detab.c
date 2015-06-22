#include<stdio.h>

#define TABING   8

main() {
    int c, nb, pos;
    
    nb = 0;
    pos = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABING - (pos - 1) % TABING;
            while (nb > 0) {
                putchar(' ');
                ++pos;
                --nb;
            }                
        } else if (c == '\n') {
            putchar('\n');
            pos = 1;
        } else {
            putchar(c);
            ++pos;
        }

    }
}
