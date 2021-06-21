#include<iostream>
using namespace std;
int main()
{
    int x,y,z,k,p=1;
    cin>>x>>y;
    z=y/x;
    k=x;
    for(int i=1; i<=z; i++)
    {
        cout<<p;
       for(int j=p+1; j<=k; j++)
       {
           cout<<" "<< j;
       }
        cout<<"\n";
        p=p+x;
        k=k+x;
    }
}