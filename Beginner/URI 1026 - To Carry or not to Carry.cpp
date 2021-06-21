#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%lu%lu", &a, &b)!=EOF){
    printf("%lu\n", a^b);
    }

}