//add (plus) one to an array problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        arr[i]+=1;
        cout<<arr[i]<<"\t";
    }
    
}