#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        int count = 1;
        ListNode * temp = head,*pretemp;
        while(temp->next != NULL){
            ++count,temp = temp->next;
        }
        int l = k%count;
        if(l == 0){
            return head;
        }
        temp->next = head;
        temp = head;
        for(int i = 0;i < count - l;i++){
            pretemp = temp;
            temp = temp->next;
        }
        pretemp->next = NULL;
        return temp;
    }
};

int main(){
    return 0;
}