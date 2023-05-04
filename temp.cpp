#include<iostream>
using namespace std;

int partition(int arr[],int l,int h)
{
	int pivot= arr[h];
	int i=l;
	int j=h;
	while(i<j)
	{
		
		while(pivot>arr[i])
		i++;
		while(pivot<arr[j])
		j--;
		if(i<j)
		swap(arr[i],arr[j]);
	
	}
	swap(arr[j],pivot);
	return j;
}
void quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
		
		int p=partition(arr,l,h);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,h);
	
	}
}
	
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"\n ENTER DATA ";
	for(int p=0;p<n;p++)
	{
		cin>>arr[p];
	}


quicksort(arr,0,n-1);
	
for(int p=0;p<n;p++)
{
	cout<<arr[p]<<" ";
}

return 0;
}