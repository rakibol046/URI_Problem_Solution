#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4,n5,ave1,ave2;
    cin>> n1>> n2>>n3>>n4;
    ave1=((n1*2)+(n2*3)+(n3*4)+n4)/10;
    if(ave1>=7.0){
        printf("Media: %.1lf\n",ave1);
        cout<< "Aluno aprovado."<<endl;
    }
    else if(ave1<5)
    {
        printf("Media: %.1lf\n",ave1);
        cout<< "Aluno reprovado."<<endl;
    }
    else
    {
        printf("Media: %.1lf\n",ave1);
        cout<< "Aluno em exame."<<endl;
        cin>>n5;
        ave2=(ave1+n5)/2;
        printf("Nota do exame: %.1lf\n",n5);
        cout<< "Aluno aprovado."<<endl;
        printf("Media final: %.1lf\n", ave2);

    }
}