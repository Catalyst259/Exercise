#include <stdio.h>
void tower(int x,char a, char b,char c){
    // 深入
	if (x > 1){
            tower(x-1, a, c, b);
        }
    // 移动当前层
        printf("%c->%d->%c\n",a,x,b);
    if (x > 1) {    
        tower(x-1, c, b, a);
    }
}

int main(){
    int n;
    char a, b, c;
    scanf("%d %c %c %c",&n,&a,&b,&c);
    tower(n, a, b, c);
}