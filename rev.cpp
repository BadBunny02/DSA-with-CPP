#include<iostream>
using namespace std;
//Creating a Node structure
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

//Creating a list and some functions
class list{
public:
    Node* head;
    Node* tail;
public:
    list(){
        head=nullptr;
        tail=nullptr;   
    }
    //Push_back function

    void Push_back(int val){
        Node* newNode= new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void Display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
};

    Node* rev(Node* head){
        Node* prev=nullptr;
        Node* curr=head;
        Node* nxt=nullptr;
        while(curr!=nullptr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
int main(){
    list *myList = new list();
    myList->Push_back(10);
    myList->Push_back(20);
    myList->Push_back(30);
    myList->Display();
    myList->head = rev(myList->head); //here we updated the head after reversal cuz rev returns the pre value which is pointing to last node of the ll
    myList->Display();
    return 0;
}