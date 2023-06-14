class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL) return head;
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next_p;
        while(cur){
            next_p = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next_p;
        }
        head = prev;

        return head;
    }
};
