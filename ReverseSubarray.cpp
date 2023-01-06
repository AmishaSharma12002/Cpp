//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
 int mid = n/2;
    
      for(int i=0;i<=n/2;i++)
      {
          int temp = arr[i];
          arr[i]=arr[mid];
          arr[mid]=temp;
          cout<<arr[i]<<"\t"<<arr[mid]<<endl;
          mid--;
      }
     
      for(int i=n/2;i<n;i++)
      {
         int temp = arr[i];
          arr[i]=arr[n];
          arr[n]=temp;
          n--; 
      }
    }
    };


//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends