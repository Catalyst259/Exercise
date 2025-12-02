#include <stdio.h>
#include <ctype.h>
int str() {
    char c;
    while((c=getchar()) != EOF && (c != '\n')){
        putchar(c);
    }
    return 0;
}