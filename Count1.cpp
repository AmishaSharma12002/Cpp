#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
int countBits(int n)
{
    int binaryNum[32],i=0,temp=0;
     while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        cout<<binaryNum[i]<<" ";
    }
    i=0;
    while(i>8)
    {
        if(binaryNum[i]==1)
        temp+=1;
        cout<<temp;
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}