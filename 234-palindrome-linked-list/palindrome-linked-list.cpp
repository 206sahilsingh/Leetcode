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
    bool isPalindrome(ListNode* head) {
       if(head ->next==NULL)
       return true;

       if(head ->next->next==NULL){
        if(head->val==head->next->val)
        return true;
       }
       
       ListNode* slow =head;
       ListNode* fast=head;
       ListNode* temp=head;
       ListNode* prev=NULL;

       while(fast&&fast->next){
        slow = slow->next;
        fast =fast->next->next;
       }

       while(slow !=NULL){
        temp= slow->next;
        slow ->next=prev;
        prev=slow;
        slow=temp;
       }

       while(prev !=NULL){
        if(prev ->val != head->val)
        return false;

        prev = prev->next;
        head = head ->next;
       }
       return true;
    }
};