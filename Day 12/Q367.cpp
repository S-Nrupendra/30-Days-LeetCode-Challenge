#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num){
    	if(pow(num,0.5) - (int)pow(num,0.5) > 0){
    		return false;
		}
		return true;
    }
};

int main(){
    return 0;
}