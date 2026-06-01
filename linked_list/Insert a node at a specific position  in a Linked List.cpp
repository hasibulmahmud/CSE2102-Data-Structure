#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

class SinglyLinkedList{
    node *head;
    public:
    SinglyLinkedList(){
        head = NULL;
    }
    
    void insert(int value){
        node* newnode=new node(value);
        if(head==NULL){
            head= newnode;
            return;
        }
        node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newnode;
    }
    
    void insertNodeAtPosition(int data, int position) {
        node* newnode = new node(data);
        if(position == 0){
            newnode->next = head;
            head = newnode;
            return;
        }
        node* temp = head;
        int count = 0;
        while(count < position - 1 && temp != NULL){
            temp = temp->next;
            count++;
        }
        if(temp == NULL){
            cout << "Position out of bounds!" << endl;
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    
    void display(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    SinglyLinkedList l1;
    
    // Insert initial nodes
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    
    cout << "Original list: ";
    l1.display();
    
    // Insert 25 at position 2
    cout << "Inserting 25 at position 2: ";
    l1.insertNodeAtPosition(25, 2);
    l1.display();
    
    // Insert 5 at position 0 (beginning)
    cout << "Inserting 5 at position 0: ";
    l1.insertNodeAtPosition(5, 0);
    l1.display();
    
    return 0;
}
