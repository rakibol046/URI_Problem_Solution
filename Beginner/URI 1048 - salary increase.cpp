#include<stdio.h>
int main()
{
        float x, salary;
    scanf("%f", &x);
    if(x>0 && x<=400)
       {
           salary=((x*15) /100);
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salary+x, salary );
       }
       else if(x>400 && x<=800)
       {
           salary=((x*12) /100);
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salary+x, salary );
       }
       else if(x>800 && x<=1200)
       {
           salary=((x*10) /100);
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salary+x, salary );
       }
       else if(x>1200 && x<=2000)
       {
           salary=((x*7) /100);
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salary+x, salary );
       }
       else
       {
           salary=((x*4) /100);
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salary+x, salary );
       }


    return 0;
}
