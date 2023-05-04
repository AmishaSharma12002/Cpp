#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * Nxt;
    Node(int data) {  
    this->data = data;  
    this->Nxt = NULL;  
  }  // can't create function in it to do so you have to create another class 
};
class LinkList{
    public:
    void Print(Node *n)
    {
        while(n!=NULL)
        {
            cout<<n->data<<endl;
            n=n->Nxt;
        }
    }
};

int main()
{
    Node * first = new Node(5);
    Node * sec = new Node(3);
    Node * third = new Node(4);
    first->Nxt=sec;
    sec->Nxt=third;
    LinkList l;
    l.Print(first);
    
    return 0;
}
