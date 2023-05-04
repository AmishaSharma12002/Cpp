#include<iostream>
#include<string>
using namespace std;
class A
{
  int a;
  public:
  A(int i )
  {
    a=i;
  }  
  void assig(int i)
  {
    a=i;
  }
  int getA(){
    return a;
  }
};
int main()
{
    A oj;
    oj.assig(5);
    cout<<oj.getA();
    return 0;
} 
