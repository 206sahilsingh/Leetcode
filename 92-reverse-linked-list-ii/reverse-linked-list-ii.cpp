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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right)
            return head;

        ListNode *beforeLeft =NULL;
        ListNode *leftNode =head;

        for(int i=1;i<left;i++) {
            beforeLeft=leftNode;
            leftNode=leftNode->next;
        }

        ListNode *rightNode =leftNode;
        for(int i=left;i<right;i++) {
            rightNode =rightNode->next;
        }

        ListNode *afterRight =rightNode->next;

        rightNode->next=NULL;

        ListNode *prev=NULL;
        ListNode *curr=leftNode;

        while(curr){
            ListNode *nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }

        if(beforeLeft)
            beforeLeft->next=prev;
        else
            head=prev;

        leftNode->next =afterRight;

        return head;
    }
};