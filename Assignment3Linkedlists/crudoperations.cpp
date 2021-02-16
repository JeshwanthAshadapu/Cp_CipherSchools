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
class singlylinkedlist
{
   public:
   Node *head;
   singlylinkedlist()
   {
       this->head=NULL;
   }
   void inseratbegining(int data)
   {
       Node *newnode=new Node(data);
       if(head==NULL)
       {
         head=newnode;
       }
       else{
           newnode->next=head;
           head=newnode;
       }
   }
   void insertatend(int data)
   {
       Node*newnode=new Node(data);
       if(head==NULL)
       {
           head=newnode;
       }
       else
       {
           Node *ptr=head;
           while(ptr!=NULL)
           {
               ptr=ptr->next;
           }
           ptr->next=newnode;
       }
   }
   void insertatposition(int data,int x)
   {
       Node *newnode=new Node(data);
       if(head==NULL)
       {
           head=newnode;
       }
       if(x==1)
       {
           newnode->next=head;
           head=newnode;
       }
       else{

           Node *ptr=head;
           Node *qtr;
           int k=1;
           while(ptr!=NULL && k<x)
           {
            qtr=ptr;
            ptr=ptr->next;
            k++;
           }
           qtr->next=newnode;
           newnode->next=ptr;
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
   void deletefrombegining()
   {
       if(head==NULL)
       {
           return;
       }
       else{
           Node*ptr=head;
           head=head->next;
           delete ptr;
       }
   }
   void deletefromend()
   {
       if(head==NULL)
       {
           return;
       }
        if (head->next == NULL)
        {
            Node *ptr = head;
            head = head->next;
            delete ptr;
            return;
        }
       else{
           Node *ptr=head, *qtr;
           while(ptr->next!=NULL)
           {
               qtr=ptr;
               ptr=ptr->next;
           }
           qtr->next=NULL;
           delete ptr;
       }
   }
   void deleteatposition(int x)
   {
       if(head==NULL)
       {
           return;
       }
       if(x==1)
       {
           Node *ptr=head;
           head=head->next;
           delete ptr;
           return;
       }
       else{
           Node *ptr=head, *qtr;
           int k=1;
           while(ptr!=NULL && k<x)
           {
               qtr=ptr;
               ptr=ptr->next;
               k++;
           }
           qtr->next=ptr->next;
           delete ptr;
       }
   }
   void deletekey(int key)
   {
       if(head==NULL)
       {
           return;
       }
       Node *ptr=head, *qtr;
       if(ptr!=NULL && ptr->data==key)
       {
           head=head->next;
           delete ptr;
           return;
       }
       else{
           while(ptr!=NULL && ptr->data!=key)
           {
               qtr=ptr;
               ptr=ptr->next;
           }
           qtr->next=ptr->next;
           delete ptr;
       }
   }


};

int main()
{
    singlylinkedlist s1;
        s1.insertatend(3);
        s1.inseratbegining(2);
        s1.insertatposition(4,2);
        s1.inseratbegining(5);
        s1.inseratbegining(6);
        s1.insertatposition(7,3);
        s1.printlist();
        s1.deletefrombegining();
        s1.deletefromend();
        s1.printlist();
        s1.deleteatposition(2);
        s1.deletekey(5);
        s1.deletekey(4);
        s1.printlist();
}
