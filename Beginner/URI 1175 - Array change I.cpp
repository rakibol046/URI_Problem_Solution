#include<iostream>
using namespace std;
int main()
{
    int array[20], i;
    for(i=0; i<20; i++)
    {
        cin>>array[i];
    }
    for(i=19; i>=0; i--)
    {
        cout<<"N["<<19-i<<"] = "<<array[i]<<endl;
    }
    return 0;
}