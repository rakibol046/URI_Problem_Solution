#include <iostream>

using namespace std;

int main() {

    int array[50], n, i;
    cin>>n;
    for(i=0; i<10; i++)
    {
        array[i]=n;
        n=n+n;
    }

    for(i=0; i<10; i++)
    {
        cout <<"N["<<i<<"] = "<<array[i]<<endl;
    }
    return 0;
}