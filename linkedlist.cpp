#include<iostream>
#include<vector>
using namespace std;
 

//individual node class

class Node{
    public:

    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:

    List(){
        head=tail=NULL;
    }
     void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode -> next=head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail ->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty \n";
            return;
        }

        Node* temp=head;
       head=head-> next;
       temp ->next=NULL;

       delete temp;
    }

    void pop_back(){
        if(tail==NULL){
            return;
        }
        Node * temp=head;
        while(temp ->next -> next !=NULL){
            temp=temp -> next;//update for next
        }
        temp ->next=NULL;
        delete tail;
    }

    void printLL(){
        Node* temp=head;

        while(temp!=NULL){
            cout<< temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }
};

int main(){
 List ll;

 ll.push_front(1); 
 ll.push_front(2); 
 ll.push_front(3); 
 ll.push_front(4); 


 ll.push_back(5);

 ll.pop_front();
 


 ll.printLL();
 ll.pop_back();

 ll.printLL();

    return 0;

}