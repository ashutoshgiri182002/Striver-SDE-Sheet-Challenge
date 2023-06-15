Node *rotate(Node *head, int k) {
     // Write your code here.

    Node *temp = head;
    Node *ans = head;
    int cnt = 0;
    while(temp->next!=NULL){
        cnt++;
        temp = temp->next;
    }
    cnt++;
    k = k%cnt;
    temp->next = head;
    for(int i = 0;i<cnt-k;i++){
        temp = temp->next;
    }
    ans = temp->next;
    temp->next = NULL;

     return ans;
}
