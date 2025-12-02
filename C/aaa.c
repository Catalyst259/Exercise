#include <stdio.h>
double arr[11][5];
int main(){
    double x;
    scanf("%lf",&x);
    for(int i = 0; i < 11; i++){
            printf("%-10.4f",x);
            printf("%-10.4f",1.0/x);
            printf("%-10.4f",x * x);
            printf("%-10.4f",x * x * x);
            printf("%-10.4f\n",x * x * x * x);
        x += 0.1;
    }
}