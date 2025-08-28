#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> st;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> rev;
        while(!st.empty()){
            rev.push(st.top());
            st.pop();
        }
        int k = rev.top();
        rev.pop();
        while(!rev.empty()){
            st.push(rev.top());
            rev.pop();
        }

        return k;
    }
    
    int peek() {
        stack<int> rev;
        while(!st.empty()){
            rev.push(st.top());
            st.pop();
        }
        int k = rev.top();
        while(!rev.empty()){
            st.push(rev.top());
            rev.pop();
        }

        return k;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main(){
    return 0;
}