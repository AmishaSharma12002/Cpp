#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * nxtp;
};
class AppendAndTraverse{
    public:
    Node * head = NULL;
    void Append(int x);
    void Traverse();
};
void AppendAndTraverse::Traverse()
{
    Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->nxtp;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
}
void AppendAndTraverse ::Append(int x)
{
    Node *n = new Node();
    n->data=x;
    n->nxtp=NULL;
    if(head == NULL)
    {
        head = n;
    }
    else {
        Node * temp = head;
        while(temp->nxtp!=NULL)
        {
            temp = temp->nxtp;
            temp->nxtp = n;
        }
    }

}
int main()
{
    AppendAndTraverse MyList;
  MyList.Append(10);
  MyList.Append(20);
  MyList.Append(30);
  MyList.Traverse();
    
    return 0;
}
