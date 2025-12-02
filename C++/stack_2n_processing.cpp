#include <iostream>
#include <stack>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int pop_st = 1;
int result = 0;
stack<int> st;

stack<int> sort_up(stack<int> sk){
    vector<int> vec;
    stack<int> sc;
    while(!sk.empty()){
        int m =sk.top();
        sk.pop();
        vec.push_back(m);
    }
    sort(vec.begin(), vec.end(),greater<int>());
    for(int i: vec)
        sc.push(i);
    return sc;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 2 * n; i++){
        string s;
        int number;
        cin >> s;
        if (s == "add"){
            cin >> number;
            st.push(number);
        }
        else if (s == "remove"){
            if (st.top() != pop_st){
                st = sort_up(st);
                st.pop();
                result += 1;
            }
            else
                st.pop();
            pop_st += 1;
        }
    }
    cout << result;
}