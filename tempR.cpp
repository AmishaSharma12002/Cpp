#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,s=0;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		int n=A[i]%10;
		s+=n*pow(10,N-1-i);
	}
    cout<<s;
	if(s%10==0)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}