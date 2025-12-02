#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    n = n % 26;
    char c;
    c = getchar();
    while((c = getchar()) != EOF && c != '\n'){
        c += n;
        if (c > 'z')
            c -= 26;
        putchar(c);
    }
}