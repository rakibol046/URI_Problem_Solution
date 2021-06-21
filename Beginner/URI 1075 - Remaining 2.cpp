#include<iostream>
using namespace std;
int main()
{
    int n, x,i=2;
    cin>>n;
    x=n+2;
    cout<<"2\n";

    while(x<=10000)
    {
        cout<<x<<"\n";
        x=n*i+2;
        i++;
    }



    return 0;
}