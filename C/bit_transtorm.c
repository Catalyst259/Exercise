#include <stdio.h>
#include <math.h>

int digit2(int x){
    int count = 0;
    while(x != 0){
        x /= 2;
        count += 1;
    }
    return count;
}

int main(){
    int x = 0;
    float result = 0;
    scanf("%d",&x);
    int digit = digit2(x);
    for(int i = 0; i < digit; i++){
        result += (x%2) * pow(10,i);
        x /= 2;
    }
    printf("%.0f",result);
}