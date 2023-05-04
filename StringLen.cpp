#include<iostream>
using namespace std;
int main()
{
    char st[]="HelloWorld";
    int i=0;
    while(st[i]!='\0')
    {
        i++;   
    }
    cout<<"res:"<<i;
    return 0;
}