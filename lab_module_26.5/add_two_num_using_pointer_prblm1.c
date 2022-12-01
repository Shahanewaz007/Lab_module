#include<stdio.h>

int main()
{

   int x,y;
   int *p, *q;

   p = &x;
   q = &y;

   scanf("%d %d",p,q);

   int sum;
   sum = *p+*q;

   printf("The sum is : %d", sum);


    return 0;
}
