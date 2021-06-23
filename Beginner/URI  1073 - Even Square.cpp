#include<stdio.h>

int main()
{
    long int n, power;
    int i;

    scanf("%d", &n);
    for(i=1;i<=n; i++)
    {
        if(i%2==0)
        {
            power=i*i;
            printf("%d^2 = %d\n", i, power);
        }
    }
    return 0;
}