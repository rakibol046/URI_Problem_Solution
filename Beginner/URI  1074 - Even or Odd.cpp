#include<stdio.h>

int main()
{
   int n;
   long long int x;
   scanf("%d", &n);
   while(n--)
   {
       scanf("%lld", &x);
            if(x==0)
                printf("NULL\n");
            else if(x%2==0)
            {
                if(x>0)
                    printf("EVEN POSITIVE\n");
                else printf("EVEN NEGATIVE\n");
            }
            else
            {
                if(x<0)
                    printf("ODD NEGATIVE\n");
                else printf("ODD POSITIVE\n");
            }
   }

    return 0;
}