#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class list
{
private:
    Node *head;
    Node *tail;

public:
    list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void Push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void Push_back(int val){
        Node *newNode = new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void Pop_front()
    {
        if(head==nullptr){
            cout<<"List is empty"<<endl;
        }
        else{
            cout<<head->data<<" is removed from the front"<<endl;
            head=head->next;
        }
    }
    
    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr\n";
    }
};

int main()
{
    list ll;
    ll.Push_back(10);
    ll.Push_back(20);
    ll.Push_back(30);
    ll.print();
    ll.Pop_front();
    ll.print();
    return 0;
}
