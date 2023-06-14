/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

// TC - O(m*n)

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    while(secondHead!=NULL){
        Node*temp = firstHead;
        while(temp!=NULL) {
            if(temp==secondHead) return secondHead;
            temp = temp->next;
        }
        secondHead = secondHead->next;
    }
    
    return NULL;

}


//O(n+m)
#include<bits/stdc++.h>

Node* findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    unordered_set<Node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;

}







