#include<stdio.h>
main(){
int a;
float b ,c,average;

scanf("%d %f %f", &a ,&b, &c);
average = b*c;
printf("NUMBER = %d\n", a);
printf("SALARY = U$ %.2f\n",average);


return 0;
}