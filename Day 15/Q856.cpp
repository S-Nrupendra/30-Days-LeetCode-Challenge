#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(char c : s){
            if(c == '('){
                st.push(0);
            }
            else{
                int top = st.top();
                st.pop();
                int score = (top == 0) ? 1 : 2 * top;
                st.top() += score;
            }
        }

        return st.top();
    }
};

int mian(){
    return 0;
}