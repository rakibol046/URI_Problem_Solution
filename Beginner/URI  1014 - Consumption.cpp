#include<stdio.h>

int main()
{
    int x;
    float y;
    scanf("%d%f", &x, &y);
    float distance=x/y;
    printf("%.3f km/l\n", distance);

    return 0;
}