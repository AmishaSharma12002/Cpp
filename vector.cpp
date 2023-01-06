#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  vector<int>v;
  int n,i=0,num;
  cin>>n;
  while(i<n)
  {
      cin>>num;
      v.push_back(num);
      i++;
  }
  sort(v.begin(),v.end()); 
  for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
 
    return 0;
}
