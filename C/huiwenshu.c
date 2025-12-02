#include <stdio.h>

int digit(int x){
    int d = 0;
    while (x != 0){
        x /= 10;
        d += 1;
    }
    return d;
}


int integer_pow(int a, int b){
    int result = 1;
    for(int i = 0; i < b; i++)
    result *= a;
    return result;
}

int right(int number){
    int di = digit(number);
    int result = 0;
    for(int i = (di-1); i >= 0; i--){
    	result += (number % 10) * integer_pow(10,i);
    	number /= 10;
    }
    return result;
}

int main(){
    int input = 0, result = 0;
    scanf("%d",&input);
    result = right(input);
    if(result == input)
        printf("Yes");
    else
        printf("No");
}