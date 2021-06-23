#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    switch(n){

    case 1: printf("Total: R$ %.2f\n", 4.00*(float)m);
                break;
    case 2: printf("Total: R$ %.2f\n", 4.50*(float)m);
                break;
    case 3: printf("Total: R$ %.2f\n", 5.00*(float)m);
                break;
    case 4: printf("Total: R$ %.2f\n", 2.00*(float)m);
                break;
    case 5: printf("Total: R$ %.2f\n", 1.50*(float)m);
                break;
    }
    return 0;
}