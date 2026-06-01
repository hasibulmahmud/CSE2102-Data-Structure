///Traversing a Linked List
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int n){
    data = n;
    next = NULL;
    }
};
void Traversal(Node* head){
    while(head){
        cout<<head->data << endl;;
    head = head->next;
    }

    }
int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next= new Node(40);

    Traversal(head);
}
