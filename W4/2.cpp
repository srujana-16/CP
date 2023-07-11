// Detect Cycle in Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* nxt = head;
        ListNode* prev = head;

        while(nxt!=NULL && nxt->next!=NULL)
        {
            nxt = nxt->next->next;
            prev = prev->next;
            if(nxt==prev)
                return true;
        }

        return false;
    }
};