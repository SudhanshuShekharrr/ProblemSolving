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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count =0;
        while(temp){
            count++;
            temp= temp->next;
        }
        temp = head;
        // if(count<n) return NULL;
        if(count==n) return head->next;
        else if(count-n==1){
            temp->next = temp->next->next;
            return head;
        }
        
        for(int i=1;i<=count-n-1;i++){
            temp = temp->next;

        }
        temp->next = temp->next->next;
        return head;
        
    }
};
