Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL) return NULL;

    Node*slow = head;
    Node*fast = head;

    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) break;
    }

    if(fast==NULL or fast->next==NULL) return NULL;

    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;

}
