#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0, i=0;
    while(1)
    {
        cin>>a;
        if(a<0)
            break;
        else
        sum=sum+a;
        i++;
    }
    printf("%.2lf\n", double(sum)/i);
}