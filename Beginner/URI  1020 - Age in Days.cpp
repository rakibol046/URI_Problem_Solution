#include <stdio.h>

int main()
{
    int n, ano, mes, dia,an;
    scanf("%d", &n);
    ano=n/365;
    an=n%365;
    mes=an/30;
    dia=an%30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}