#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class singlelinkedlist
{
    public:
    Node *head;
    singlelinkedlist()
    {
        this->head=NULL;
    }
    void insert(int data)
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
    bool ispalindrome()
    {
        stack<int>s;
        Node *ptr=head;
        while(ptr!=NULL)
        {
            s.push(ptr->data);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL)
        {
            int i=s.top();
            s.pop();
            if(ptr->data!=i)
            {
                return false;
            }
            ptr=ptr->next;
        }
        return true;
    }

};
int main()
{
    singlelinkedlist l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.printlist();
    int res=l1.ispalindrome();
    (res==1)?cout<<"palindrome"<<endl:cout<<"Not palindrome"<<endl;
    return 0;
}