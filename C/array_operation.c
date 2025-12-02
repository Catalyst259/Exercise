#include <stdio.h>

int arr[200];
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        scanf("%d",arr+i);
    int k;
    scanf("%d",&k);
    for(int i = 0; i < k; i++){
        char ch;
        int index, num;
        scanf(" %c %d",&ch,&index);
        if ((ch != 'Q') && (ch != 'D') && (ch != 'C')){
            scanf("%d",&num);
        }
        if(ch == 'U'){
            if ((index >= n) || (index < 0)){
            printf("Invalid Operation!\n");
            continue;
        }
            arr[index] = num;
        }
        if(ch == 'I'){
            if ((index > n) || (index < 0)){
            printf("Invalid Operation!\n");
            continue;
        }
            for(int j = n; j >= index; j--)
                arr[j+1] = arr[j];
            arr[index] = num;
            n += 1;
        }
        if(ch == 'D'){
            if ((index >= n) || (index < 0)){
            printf("Invalid Operation!\n");
            continue;
            }
            for(int j = index; j < n-1; j++){
                arr[j] = arr[j+1];
            	n -= 1;
            }
        }
        if(ch == 'C'){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if (arr[j] != index)
                    cnt += 1;
            }
            if (cnt == n)
                printf("Invalid Operation!\n");
            else
                for(int j = 0; j < n; j++){
                	if (arr[j] == index){
						for(int h = j; h < n-1; h++)
                			arr[h] = arr[h+1];
            				n -= 1;
                            j -= 1;
            		}
            	}
            }
        if(ch == 'S'){
            if ((index >= n) || (index < 0) || (num >= n) || (num < 0)){
            printf("Invalid Operation!\n");
            continue;
            }
            int temp = arr[index];
            arr[index] = arr[num];
            arr[num] = temp;
        }
        if(ch == 'Q'){
            if ((index >= n) || (index < 0)){
            printf("Invalid Operation!\n");
            continue;
        }
            printf("%d\n",arr[index]);
        }
    }       
}