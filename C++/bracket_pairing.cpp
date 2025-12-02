#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
// Turn string into stack
stack<char> shift(string s){
    stack<char> st; 
    for (int i = s.size()-1; i >= 0; i--){
        if (s[i] == '[' || s[i] == ']' || s[i] == '(' || s[i] == ')')
            st.push(s[i]);
    }
    return st;
}

// legal judgemeng logic
bool legal(stack<char> st){
    int state = 0;
    if(st.top() == ']' || st.top() == ')')
        return false;
    else{
        while(!st.empty()){
            state = 1;
            if(st.top() == ']' || st.top() == ')')
                return false;
        char top = st.top();
        while(state){
            if (st.top() == ']' && top == '['){
                state = 0;
                st.pop();
                if (st.empty())
                    return true;
                break;
            }
            else if (st.top() == ')' && top == '('){
                state = 0;
                st.pop();
                if (st.empty())
                    return true;
                break;
            }
            if (st.empty()){
                return false;
            }
            st.pop();
            }
        }
        return true;
    }
}

int main(){
    string s;
    cin >> s;
    stack<char> st = shift(s);
    cout << legal(st);
    return 0;
}