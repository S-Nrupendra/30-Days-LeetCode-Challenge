#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0,twenty = 0;
        for(auto n : bills){
            if(n == 5) five++;
            else if(n == 10){
                if(five == 0) return false;
                else{
                    ten++,five--;
                }
            }
            else{
                if(ten == 0){
                    if(five > 2){
                        five = five - 3;
                    }
                    else return false;
                }
                else{
                    if(five > 0){
                        ten--,five--;
                    }
                    else return false;
                }
                twenty++;
            }
        }
        return true;
    }
};

int main(){
    return 0;
}