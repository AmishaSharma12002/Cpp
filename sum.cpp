#include<iostream>
using namespace std;
int main()
{
   int x = 6;
   int *p_x=&x;
   int **pp=&p_x;
   cout<<"X:"<<x<<endl;
   cout<<"p_x:"<<p_x<<endl;
   cout<<"*p_x:"<<*p_x<<endl;
   cout<<"&p_x:"<<&p_x<<endl;
   cout<<"&p_x+1: "<<&p_x+1;
   cout<<"&p_x:"<<&p_x<<endl;
    return 0;
}