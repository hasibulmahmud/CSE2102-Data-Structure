class Solution {
///GFG problem solution.
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        if(head==NULL||x==0 ){
            return head;
        }
        int count =0;
        Node* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count<x){
            return head;
        }
        if(x==1){
            return head->next;
        }
    Node* curr = head;
    Node*prev = NULL;
    Node* fut=NULL;
    x--;
    while(x--){
        prev = curr;
        curr=curr->next;
        fut=curr->next;
    }
    prev->next = fut;
    return head;
    
    }
};
