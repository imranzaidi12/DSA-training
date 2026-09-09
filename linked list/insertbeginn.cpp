#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    Node* head= new Node(20);
    head->next= new Node(30);
    Node* newNode= new Node(10);

    newNode->next=head;
    head= newNode;

    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data << "";
        temp = temp-> next;

    }
    return 0;
}