#include<stdio.h>
#define MAXLINE 1000

int getline_t(char line[], int maxline);
void reverse(char s[]);

main() {
    int len;
    char line[MAXLINE];

    while (getline_t(line, MAXLINE)) 
        reverse(line);    
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

void reverse(char s[]) {
    int i;

    while (s[i] != '\n')
        ++i;
    --i;
    int l = 0;
    int r = i; 
    while (l < r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        ++l;
        --r;
    }
        
}
