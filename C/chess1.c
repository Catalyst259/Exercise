#include <stdio.h>
#include <ctype.h>
char chess[100][100];
int countB = 0;
int countW = 0;
int main(){
    // 输入部分
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            chess[i][j] = '*';
        }
    }
    
    for(int i = 10; i < 20; i++){
        for(int j = 10; j < 20; j++){
            char m;
            scanf("%c",&m);
            chess[i][j] = m;
        }
        getchar();
    }
    // 遍历白子可能性
    for(int i = 10; i < 20; i++){
        for(int j = 10; j < 20; j++){
            countW = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i][j+t] == 'W'){
                    countW += 1;
                }
                if (countW == 5){
                    printf("N");
                    return 0;
                }
            }
            countW = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i+t][j] == 'W'){
                    countW += 1;
                }
                if (countW == 5){
                    printf("N");
                    return 0;
                }
            }
            countW = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i+t][j+t] == 'W'){
                    countW += 1;
                }
                if (countW == 5){
                    printf("N");
                    return 0;
                }
        }
            countW = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i+t][j-t] == 'W'){
                    countW += 1;
                }
                if (countW == 5){
                    printf("N");
                    return 0;
                }
        }
    }
}
    // 黑子开始落子
    for(int k = 10; k < 20; k++){
        for(int h = 10; h < 20; h++){
            int cnt = 0;
            if (chess[k][h] == '.'){
            // 每一次假设
                chess[k][h] = 'B';
                cnt = 1;
            }
        	for(int i = 10; i < 20; i++){
        	for(int j = 10; j < 20; j++){
            countB = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i][j+t] == 'B'){
                    countB += 1;
                }
                if (countB == 5){
                    printf("Y");
                    return 0;
                }
            }
            countB = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i+t][j] == 'B'){
                    countB += 1;
                }
                if (countB == 5){
                    printf("Y");
                    return 0;
                }
            }
            countB = 0;
            for(int t = 0; t < 5; t++){
                if(chess[i+t][j+t] == 'B'){
                    countB += 1;
                }
                if (countB == 5){
                    printf("Y");
                    return 0;
                }
            }
            countB = 0;
            for(int t = 0; t < 5; t++){
                if (chess[i+t][j-t] == 'B'){
                    countB += 1;
                }
                if (countB == 5){
                    printf("Y");
                    return 0;
                }
            }
            // 一个格子的推演结束
        }
    }
    // 白棋全部推演完成
    if (cnt == 1)
        chess[k][h] = '.';
}
}
printf("N");
}