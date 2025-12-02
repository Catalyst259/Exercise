#include <iostream>
using namespace std;
int arr[101];
int main(){
    int n, k, m;
    cin >> n >> k >> m;
    // Input Array
    for (int i = 0; i < n; i++)
        arr[i] = i;
    int count_all = 0;
    int count = 0;
    // The Process of Deletion
    while (count_all < n) {
        if ((arr[k] != 0) || k == 0){
        if (count == m){
            count = 0;
            count_all += 1;
            arr[k] = 0;
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
        if (arr[i] != 0)
            cout << arr[i];
            return 0;
    }
    cout << 0;
    return 0;
}