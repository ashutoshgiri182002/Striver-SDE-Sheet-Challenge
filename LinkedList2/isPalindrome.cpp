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

   ListNode* reverse(ListNode *head){
    if(head == NULL){
        return NULL;
    }
   ListNode *prev = NULL;
   ListNode *curr = head;
   ListNode *next = head->next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


    bool isPalindrome(ListNode* head) {

            if(head==NULL or head->next==NULL){
        return true;
    }

      ListNode *slow = head;
      ListNode *fast = head->next;

       while(fast!=NULL and fast->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;
       }

      ListNode*head1 = head;
      ListNode*tail1 = slow;
      ListNode*head2 = slow->next;
      ListNode*tail2 = slow->next;

       slow->next = NULL;

       while(tail2->next!=NULL) tail2 = tail2->next;

       head2 = reverse(head2);

        while(head1 != NULL && head2 != NULL){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
        
    }
};
