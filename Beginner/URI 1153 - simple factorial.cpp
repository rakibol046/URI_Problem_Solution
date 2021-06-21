#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fab=1,n;
    cin>>n;
    if(n==0)
        cout<<"1\n";
    else
    {
        for (int i=1;i<=n;i++)
          {
            fab=fab*i;
          }
  cout<<fab<<"\n";
    }

}