#include <stdio.h>
#include <stdlib.h>

int main(){
    int k;
    double n = 1,Sn;
    scanf("%d",&k);
    while(Sn <= k){
        Sn += 1/n;
        n += 1;
    }
    printf("%d",n);
}