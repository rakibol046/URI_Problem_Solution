#include<stdio.h>
#include <iostream>

using namespace std;

int main() {

    double array[100],n;
    int i;
    for(i=0; i<100; i++)
    {
        cin>>n;
        if(n<=10)
           {
                array[i]=n;
                cout <<"A["<<i<<"] = ";
                printf("%.1lf\n", array[i]);
           }

    }


    return 0;
}
