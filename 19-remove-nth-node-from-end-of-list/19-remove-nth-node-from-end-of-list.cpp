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
        ListNode *dummy=new ListNode(0),*temp=dummy;
        dummy->next=head;
        int len=-1;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        temp=dummy;
        n=len-n;
        for(int i=0;i<n;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return dummy->next;
    }
    
  

 
};