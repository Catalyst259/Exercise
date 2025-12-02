#include <iostream>
#include <cstring>
using namespace std;
int arr[101];
int main(){
    int n, k, m;
    cin >> n >> k >> m;
    // Input Array
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < n; i++)
        arr[i] = i;
    int count_all = 0;
    int count = 1;
    // The Process of Deletion
    while (count_all < n - 1) {
        if(arr[k] != -1){
        if (count == m){
            count = 0;
            count_all += 1;
            arr[k] = -1;
            continue;
        }
        count += 1;
        }
        k += 1;
        if (k == n)
            k = 0;
    }

    // Final Output
    for(int i = 0; i < n; i++){
        if (arr[i] != -1)
            cout << arr[i];
    }
}