#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,i;
        n=5;

        int ar[]={85,25, 65, 21, 84}, res[n];
    
        for(i=0;i<n;i++)
        {
            res[i] = ar[i]%10;
        }
        cout<<res[n-1];
        if(res[n-1] == 0)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }