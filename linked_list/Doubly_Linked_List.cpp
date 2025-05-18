#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int val){
        prev = NULL;
        data = val;
        next = NULL;
    }

};
class Doubly_linked_list{
    Node * head;
    public:
    Doubly_linked_list(){
        head = NULL;
    }
   void insert(int val){
    if(head == NULL){
        head = new Node(val);
        return;
    }else{
        Node* newNode = new Node(val);
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
        newNode->prev =temp;
        
    }

   }
   void delete_Node(int val){
    if(head == NULL){
        return ;
    }else{
        if(head->data == val){
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            return;
        }else{
            
            Node* temp = head;
           
            while (temp != NULL && temp->data != val) 
            {
               
                temp = temp->next;
             
            }
            if(temp ==NULL)
            {
                cout << "Number is not found" << endl;
                return;
            }
            if(temp->next==NULL){
                temp->prev->next = NULL;
                delete temp;
                return;
            }
             temp->prev->next = temp->next;
              temp->next->prev = temp->prev;
                delete temp;
            delete temp;

            
        }

    }
   }
   void Find(int val) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            cout << "Number is in the list" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Number is not in the list" << endl;
}
   void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
   }

};
int main(){
    Doubly_linked_list dl1;
    dl1.insert(12);
    dl1.insert(20);
    dl1.insert(22);
    dl1.insert(30);
    dl1.insert(32);
    dl1.insert(40);
    dl1.display();
    dl1.delete_Node(220);
    dl1.delete_Node(20);
    dl1.display();
    dl1.Find(40);

}
