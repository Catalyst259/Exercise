#include <stdio.h>
int x = 0;
int main(){
    int time;
    int result = 0;
    scanf("%d",&time);

    for(int i; i < time; i++){
        int a = 0;
        int b = 0;
        scanf("%d %d",&a,&b);
        if((a >= 90) && (a <= 140) && (b >= 60) && (b <= 90)){
            result += 1;

        }
        else
        result = 0;
        if (result > x)
            x = result;
    }
    printf("%d",x);
}