#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist
{
    public:
    Node *head;
    linkedlist()
    {
        this->head=NULL;
    }
    void insertelement(int data)
    {
        Node *temp=new Node(data);
        if(head==NULL)
        {
            head=temp;
        }
        else{
            Node *ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
    void printlist()
    {
        Node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;

    }
    void reverselinkedlist()
    {
        Node *curr=head, *prev=NULL, *next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
};
int main()
{
    linkedlist l1;
    l1.insertelement(1);
    l1.insertelement(2);
    l1.insertelement(3);
    l1.insertelement(4);
    l1.printlist();
    l1.reverselinkedlist();
    l1.printlist();
    return 0;
}