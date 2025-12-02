#include <stdio.h>
#include <string.h>
int main(){
	char ch[1000];
    while(gets(ch) != NULL){
        int length = strlen(ch);
        for(int i = 0; i < length - 1; i++){
            if((ch[i] == 'y') && (ch[i+1] == 'o') && (ch[i+2] =='u')){
                ch[i] = 'w';
                ch[i+1] = 'e';
                for(int j = i+2; j < length - 1; j++){
                    ch[j] = ch[j+1];
                }
                length--;
                ch[length] = '\0';
            }
        }
        puts(ch);
    }
}