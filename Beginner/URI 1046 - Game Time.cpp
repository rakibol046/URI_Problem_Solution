#include<iostream>
using namespace std;
int main()
{
    int start, end;
    cin>> start >> end;
    if(start==end)
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    else if(start>end)
        cout << "O JOGO DUROU "<< (24-start+end) <<" HORA(S)\n";
    else
         cout << "O JOGO DUROU "<< (end-start) <<" HORA(S)\n";

    return 0;
}