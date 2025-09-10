#include<bits/stdc++.h>
using namespace std;

class Solution {
    void PreorderT(TreeNode* root,vector<int>& ans){
        if(!root){return;}
        ans.push_back(root->val);
        PreorderT(root->left,ans);
        PreorderT(root->right,ans);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        PreorderT(root,ans);
        return ans;
    }
};

int main(){
    return 0;
}