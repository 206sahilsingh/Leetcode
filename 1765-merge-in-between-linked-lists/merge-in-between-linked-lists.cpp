class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* curr =list1;
        int A =a;

        while(--a){
            curr = curr->next;
        }

        ListNode* temp = curr;

        b = b-A+1;

        while(b--){
            temp = temp->next;
        }

        curr->next = list2;

        ListNode* temp2 = list2;

        while(temp2->next){
            temp2 = temp2->next;
        }

        temp2->next = temp->next;

        return list1;
    }
};