#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node( int val){
        data=val;
        next=prev=NULL;
  
    }
};

class DoublyList{
    
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head=tail=NULL;
    }
    void push_front(int val){
    Node* newNode =new Node(val);
    if(head==NULL){
        head=tail=newNode;
        return;
    }else{
        newNode ->next =head;
        head->prev=newNode;
        head=newNode;
    }
}
void printDLL(){
    Node* temp=head;

    while(temp !=NULL){
        cout<< temp->data <<" <=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}


void push_back(int val){

    Node* newNode =new Node(val);
    if(head==NULL){
        head=tail=newNode;
        return;
    }else{
        newNode ->prev =tail;
        tail->next=newNode;
        tail=newNode;
    }
}

void pop_front(){
    if(head==NULL){
        cout<<" The dll is empty , chutye pehle list to bana le fir delete karna\n";
        return;
    }
    Node* temp=head;

    head=head->next;
    if(head != NULL){
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;

}
void pop_back(){
    if(head==NULL){
        cout<<" The dll is empty , chutye pehle list to bana le fir delete karna\n";
        return;
    }
    Node* temp=tail;

    tail=tail->prev;
    if(tail != NULL){
        tail->next=NULL;
    }
    temp->next=NULL;
    delete temp;

}


};





 int main(){

    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_front(5);

    dll.push_back(6); 
    dll.push_back(7); 
    dll.push_back(8); 


    dll.printDLL();

    dll.pop_front();
     dll.printDLL();

      dll.pop_back();
     dll.printDLL();


    return 0;
 }