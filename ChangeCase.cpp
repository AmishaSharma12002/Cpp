#include<iostream>
using namespace std;
int n;
char* InputStr()
{ 
    cout<<"\nEnter the size of ur string: ";
    cin>>n;
    char *np;
    char stri[n];
    cout<<"\nEnter the string: ";
    for(int i =0;i<n;i++ )
    {
        cin>>stri[n];
    }
    np=&stri[0];
    return np;
}
void uppCase(char* nstr)
{
    for(int i=0;i<n;i++)
    {
        nstr[i]-=32;
    }
    for(int i=0;i<n;i++)
    {
        cout<<nstr[i];
    }
    
}
void LoweCase(char* nstr)
{
    for(int i=0;i<n;i++)
    {
        nstr[i]+=32;
    }
    for(int i=0;i<n;i++)
    {
        cout<<nstr[i];
    }
    
}
int main()
{
    cout<<"\t\t\t----Menu----"<<endl;
    cout<<"\t\t\t1: ToUpperCase"<<endl<<"\t\t\t2: ToLowerCase"<<endl<<"\t\t\t3: Exit"<<endl;
    cout<<"Enter your Choice: ";
    int ch,n;
    char* nstr;
    cin>>ch;
    switch(ch)
    {
        case 1: nstr=InputStr();
                uppCase(nstr);
                break;
        case 2: nstr=InputStr();
                LoweCase(nstr);
                break;
        default: cout<<"----Exiting----";
    }
    return 0;
}