#include<stdio.h>

int main()
{
    float n, sum=0, ave;
    int i, count=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f", &n);
        if(n>0)
        {
           sum=sum+n;
           count++;
        }
    }
    ave=sum/count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", ave);
    return 0;
}