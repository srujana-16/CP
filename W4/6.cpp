// remove nth node from end of list
// two pointer method - using two pointers fast and slow - fast pointer is n steps ahead of slow pointer

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
        ListNode *fast = head; 
        ListNode* slow = head;
        if(head==NULL || head->next == NULL)
            return NULL;

        int count =0;
        while(count<n)
        {
            count++;
            fast = fast->next;
        }

        // where there are only 2 elements
        if(fast==NULL)
            return head->next;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow= slow->next;
            fast = fast->next;
        }

        slow->next=slow->next->next;
        return head;
    }
};