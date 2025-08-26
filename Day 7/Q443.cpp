#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), write = 0, read = 0;

        while(read < n){
            char current = chars[read];
            int count = 0;

            while(read < n && chars[read] == current){
                read++,count++;
            }

            chars[write++] = current;

            if(count > 1){
                string cs = to_string(count);
                for(char c : cs){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};

int main(){
    return 0;
}