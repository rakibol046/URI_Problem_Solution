#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i;
    cin>>s;
    for(i=1; i<=s; i++)
    {
       if(s%i==0)
        cout<<i<<endl;
    }
}