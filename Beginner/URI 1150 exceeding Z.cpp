#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,sum=0, i=0,c=1;
    cin>>x;
    do{
        cin>>z;
    }while(x>=z);
for(i=x; i<z; i++)
{
    sum=sum+i;
    if(sum>z)break;
    c++;
}
        cout<<c<<"\n";
       

}