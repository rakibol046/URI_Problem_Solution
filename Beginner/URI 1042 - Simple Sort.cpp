#include<iostream>
using namespace std;
int main()
{
    int x,y,z,min, mid,max;
    cin>>x>>y>>z;
    if(x<y && x<z)
    {
        min=x;
        if(y<z)
        {
            mid=y;
            max=z;
        }
        else
        {
            mid=z;
            max=y;
        }
    }
    if(x>y && y<z)
    {
        min=y;
        if(x<z)
        {
            mid=x;
            max=z;
        }
        else
        {
            mid=z;
            max=x;
        }

    }
    if(z<x && z<y){
        min=z;
        if(x<y)
        {
            mid=x;
            max=y;
        }
        else
        {
            mid=y;
            max=x;
        }
    }

    cout<< min <<endl;
    cout<< mid <<endl;
    cout<< max <<endl<<endl;
    cout<< x <<endl;
    cout<< y <<endl;
    cout<< z <<endl;

    return 0;
}