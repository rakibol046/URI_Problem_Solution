#include<stdio.h>
main()
{
    int a,b;
    float x, z, y;
    scanf("%d%d%f", &a, &b, &x);
    y=b*x;
    scanf("%d%d%f", &a, &b, &x);
     z=b*x;
     printf("VALOR A PAGAR: R$ %.2f\n", y+z);

    return 0;
}