#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return (a>b?a:b);
}
int max(int a,int b,int c)
{
    return (max(max(a,b),c));
}
void printArr(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"\t";
   }
}
int maxcrossingsum(int arr[],int i,int m, int n)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for (int j = m; j >= i; j--) {
        sum = sum + arr[j];
        if (sum > left_sum)
            left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int j = m; j <= n; j++) {
        sum = sum + arr[j];
        if (sum > right_sum)
            right_sum = sum;
    }
    return max(left_sum + right_sum - arr[m], left_sum, right_sum);

}
int MaxSubarraySum(int arr[],int i,int n)
{
    if(i>n)
    return INT_MIN;
    if(i==n)
    return arr[n];
    int m = (i+n)/2;
    return max(MaxSubarraySum(arr,i,m-1),MaxSubarraySum(arr,m+1,n),maxcrossingsum(arr,i,m,n));

}
int main()
{
    cout<<"\t\t-----MaxSubarray-----"<<endl;
    int n,i;
    cout<<"Enter num of elements that u want to input in array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements in array: ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    printArr(arr,n-1);
    int maxSum=MaxSubarraySum(arr,0,n-1);
    cout<<"Sum:"<<maxSum;
    return 0;
}




