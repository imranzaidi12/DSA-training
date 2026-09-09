#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next= NULL;
    }
};
Node* reverselist(Node* head){
    Node* prev = NULL;
    Node* current= head;
    Node* next= NULL;

    while (current != NULL){
        next= current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev; 
}

void printlist(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"";
        temp= temp->next;
    }
}
int main(){
    Node* head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);

    cout<<"Original list:";
    printlist(head);

    head = reverselist(head);

    cout<<"\nReversed list:";
    printlist(head);

    return 0;
}