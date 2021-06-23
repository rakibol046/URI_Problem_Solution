#include<stdio.h>
main()
{
    char  A[30];
    double b,c;
    gets(A);
    scanf("%lf %lf",&b, &c);

    printf("TOTAL = R$ %.2lf\n", b+((c*15)/100));

    return 0;
}