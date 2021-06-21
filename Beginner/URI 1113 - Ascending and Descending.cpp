#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(1)
    {
        cin>>x>>y;
        if(x==y)
            return 0;
        else if(x>y)
        cout<<"Decrescente\n";
        else
            cout<<"Crescente\n";

    }
}