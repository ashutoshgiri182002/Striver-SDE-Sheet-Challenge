Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    Node*start = new Node();
    start->next = head;
    Node*slow =start;
    Node*fast = start;
    
    for(int i = 1;i<=k;i++) fast = fast->next;
    
    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;

    return start->next;
}
