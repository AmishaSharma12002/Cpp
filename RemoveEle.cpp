//Program to remove element in place in arrays(LeetCode)
#include<iostream>
using namespace std;
void removeElement(int arr[],int val,int n)
{
    int cnt=0;
    //loop for checking duplicate elements 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            cnt++;
        }
    }
    int num = n;
    num-=cnt;
    int k=0;
    int arr2[num];
    for(int i =0;i<n;i++)
    {
            if(arr[i]!=val){
                arr2[k]=arr[i];
                k++;
            }
    }
    for(int i =0;i<num;i++)
    {
        cout<<arr2[i]<<"\t";
    }
   
}
void printArr(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[50],n,val;
    cout<<"Enter number of elements in array:";
    cin>>n;
    cout<<"\nEnter Elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array you have inputted:\n";
    printArr(arr,n);
    cout<<"\nEnter the element that you want to remove:";
    cin>>val;
    cout<<"Removing Array.....\n";
     cout<<"Array: ";
    removeElement(arr,val,n);
   
    


    
}