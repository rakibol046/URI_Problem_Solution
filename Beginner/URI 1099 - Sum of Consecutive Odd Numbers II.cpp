#include<iostream>
using namespace std;
int main()
{
    int n,x,y,sum;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x==y)
            cout<<"0\n";
        else if(x<y)
        {
            sum=0;
            for(int i=x+1; i<y; i++)
            {
                if(i%2!=0)
                sum=sum+i;
            }

                cout<<sum<<endl;
        }
        else
        {
            sum=0;
              for(int i=y+1; i<x; i++)
                {
                if(i%2!=0)
                sum=sum+i;
                }
                cout<<sum<<endl;
        }
    }
}