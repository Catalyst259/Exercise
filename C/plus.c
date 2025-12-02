#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    char o[101];
    gets(s);
    for(int i = 0; i <= (strlen(s)-1); i++){
        if (i == strlen(s)-1){
            o[i] = s[i] + s[0];
            break;
        }
        o[i] = s[i] + s[i+1];
    }
    o[strlen(s)] = '\0';
    puts(o);
}