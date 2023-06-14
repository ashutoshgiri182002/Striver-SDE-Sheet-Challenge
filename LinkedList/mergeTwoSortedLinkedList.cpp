class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode*temp1 = list1;
        ListNode*temp2 = list2;
        ListNode*dummy = new ListNode(-1);
        ListNode*head = dummy;
       
        while(temp1 and temp2){
            if(temp1->val > temp2->val){
                head->next = temp2;
                temp2 = temp2->next;
            }
            else{
                head->next = temp1;
                temp1 =temp1->next;
            }

            head = head->next;
        }

        while(temp1){
            head->next = temp1;
            temp1 = temp1->next;
            head = head->next;
        }

        while(temp2){
            head->next = temp2;
            temp2 = temp2->next;
            head = head->next;
        }

        return dummy->next;
        
    }
};
