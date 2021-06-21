#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,n,c;
    cin>>n;
    cout<<"0 1";


for (int i = 2; i <= n-1; i++)
  {
     c = a + b;
     a = b;
     b = c;
     cout<<" "<<b;
  }
  cout<<"\n";



}