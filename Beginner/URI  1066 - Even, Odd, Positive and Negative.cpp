#include<stdio.h>
int main()
{
    int n,even=0,odd=0,pos=0,neg=0,i, eve,evenn=0;
    for(i=1; i<=5; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
        if(n>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }

    }
    printf("%d valor(es) par(es)\n", even);
     printf("%d valor(es) impar(es)\n", odd);
      printf("%d valor(es) positivo(s)\n", pos);
       printf("%d valor(es) negativo(s)\n", neg-1);

    return 0;
}