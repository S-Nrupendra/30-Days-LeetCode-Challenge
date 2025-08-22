#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size(),num = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == 'I'){
                if(s[i + 1] == 'V'){
                    num += 4;
                    i++;
                }
                else if(s[i + 1] == 'X'){
                    num += 9;
                    i++;
                }
                num += 1;
            }
            if(s[i] == 'V'){
                num += 5;
            }
            if(s[i] == 'X'){
                if(s[i + 1] == 'L'){
                    num += 40;
                    i++;
                }
                else if(s[i + 1] == 'C'){
                    num += 90;
                    i++;
                }
                num += 10;
            }
            if(s[i] == 'L'){
                num += 50;
            }
            if(s[i] == 'C'){
                if(s[i + 1] == 'D'){
                    num += 400;
                    i++;
                }
                else if(s[i + 1] == 'M'){
                    num += 900;
                    i++;
                }
                num += 100;
            }
            if(s[i] == 'D'){
                num += 500;
            }
            if(s[i] == 'M'){
                num += 1000;
            }
        }
        return num;
    }
};

int main(){
    return 0;
}