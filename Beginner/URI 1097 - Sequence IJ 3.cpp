#include <stdio.h>
int main()
{
    int I,J,x=7,y=5;
    for(I=1;I<=9;I=I+2)
    {
        for(J=x;J>=y;J--)
            printf ("I=%d J=%d\n",I,J);
        x+=2;
        y+=2;

    }
    return 0;
}