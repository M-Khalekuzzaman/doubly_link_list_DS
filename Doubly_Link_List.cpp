#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *Prev;
    Node *Next;

    //Constructor declare
    Node(int data)
    {
        this -> data = data;
        this -> Prev = NULL;
        this -> Next = NULL;
    }
};
void insertAtTail(Node* &head,int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    newNode->Prev = temp;
}
void insertAtHead(Node* &head,int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->Prev = newNode;
    newNode->Next = head;
    head = newNode;

}
void printList(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data;
        if(temp->Next != NULL)
            cout<<" -> ";
        temp = temp->Next;
    }
    cout<<endl;
}
void reversePrintList(Node* &head)
{
    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    while(temp != NULL)
    {
        cout<<temp->data;
        if(temp->Prev != NULL) cout<<" <- ";
        temp = temp->Prev;
    }
}
int main()
{

    Node *head = NULL;
    cout<<"Choice 1 : Insert at Tail"<<endl<<"Choice 2 : Insert at head"<<endl<<"Choice 0 : Exit"<<endl<<endl;
    int value,choice = 1;
    while(choice != 0)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter your value : ";
            cin>>value;
            insertAtTail(head,value);
            break;
        case 2:
            cout<<"Enter your value : ";
            cin>>value;
            insertAtHead(head,value);
            break;
        default:
            break;
        }
        cout<<"Next choice : ";
        cin>>choice;
    }

    cout<<endl<<"Link-List is : ";
    printList(head);
    cout<<endl<<"Reverse-List is : ";
    reversePrintList(head);

    return 0;
}
