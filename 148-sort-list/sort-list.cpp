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
    ListNode* sortList(ListNode* head) {
      vector<int>ans;
      ListNode *temp=head;

      while(temp){
        ans.push_back(temp->val);

        temp=temp->next;
      } 
      temp=head;
      sort(ans.begin(),ans.end());

     for(int j=0;j<ans.size();j++){
        temp->val=ans[j];
        temp=temp->next;
     }
     return head;

    }
};