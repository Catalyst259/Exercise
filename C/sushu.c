#include <stdio.h>

int main(){
    int count = 1;
    int arr[101] = {0};
    for(int i = 101; i < 201; i++){
  		for(int j = 2; j < i; j++){
            if (i / j * j == i)
                break;
            if (j == i-1){
                count += 1;
            	arr[i-100] = i;
            }
        }
    }
    printf("%d\n",count-1);
        for(int i = 0; i < 101; i++){
            if(arr[i] != 0)
                printf("%d ",arr[i]);
}
}