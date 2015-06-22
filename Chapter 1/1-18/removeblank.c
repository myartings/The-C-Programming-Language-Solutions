#include<stdio.h>
#define MAXLINE 1000
#define LONGLINE 80 

int getline_t(char line[], int maxline);
int remove(char s[]);

main() {
    int len;
    char line[MAXLINE];

    while (getline_t(line, MAXLINE)) 
        if (remove(line) > 0) {
            printf("%s", line);
        }
    return 0;
}

int getline_t(char s[], int lim) {
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

int remove(char s[]) {
    int i;
    
    i = 0;
    while (s[i] != '\n')
        ++i;
    --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {
        --i;
    }

    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
