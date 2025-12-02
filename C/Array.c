# include <stdio.h>

int score[10];

void Input(){
    for (int i = 0; i < 10; i++) {
        scanf("%d",&score[i]);
    }
}

void Output(){
    for (int i = 0; i < 10; i++){
        printf("%d ", score[i]);
    }
}

void MaxMinMean(){
    int max, min = score[0];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if(score[i] > max) max = score[i];
        if(score[i] < min) min = score[i];
        sum += score[i];
    }
    double mean = sum / 10.0;
    printf("最高分=%d 最低分=%d 平均分=%.2f\n",max, min, mean);
}

void Reverse(){
    for(int i = 0; i < 5; i++){
        int temp = score[i];
        score[i] = score[9-i];
        score[9-i] = temp;
    }
}

void BubbleSortUp(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(score[j] > score[j+1]){
            int temp = score[j];
            score[j] = score[j+1];
            score[j+1] = temp;
            }
        }
    }
}

void BubbleSortDown(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(score[j] < score[j+1]){
                int temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }
}

void ReversedNumber(x){
    int arr[x-1];
    int *p = arr;
    int count = 0;
    for(int i = 0; i < x; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 1; j < x; j++){
        for(int k = 0; k < j; k++){
            if(score[k] > score[j]){
                count += 1;
            }
        }
    }
    printf("%d\n",count);

}

int main(){
    Input();
    BubbleSortUp();
    Output();
    return 0;
}