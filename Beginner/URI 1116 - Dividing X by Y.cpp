#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    int x,y;
    double b;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel\n";
        else{
         b=x/double(y);
        printf("%.1lf\n", b);
        }
    }
}