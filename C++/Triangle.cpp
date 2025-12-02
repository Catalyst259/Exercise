#include <iostream>
using namespace std;
long long C(int m, int n){
    long long up = 1, down = 1, result = 1;
    for(long long i = m; i > (m - n); i--){
        up = i;
        down = (m - i + 1);
        int temp = up / down;
        result *= temp;
    }
    return result;
}

int main(){
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        for(int j = 0; j <= i; j++){
            long long result;
            if (j > i / 2){
                result = C(i, i-j);
            }
            else {
                result = C(i, j);
            }
            cout << result << " ";
        }
        cout << endl;
    }
}