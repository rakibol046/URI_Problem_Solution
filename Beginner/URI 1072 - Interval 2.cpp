#include<iostream>
using namespace std;
int main()
{
    int x,y,count=0;
    cin>> x;
    for(int i=1; i<=x; i++)
    {
        cin>>y;
        if(y>=10 && y<=20)
        {
            count++;
        }
    }
    cout<<count<<" in\n";
    cout<<x-count<<" out\n";

    return 0;
}