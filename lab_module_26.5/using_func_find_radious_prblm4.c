#include<stdio.h>

double find_radious(double r);
double PI(void);

int main()
{
   double n;

   scanf("%lf",&n);

   double res = find_radious(n);

   printf("The Area is : %lf",res);


    return 0;
}

double find_radious(double r)
{
    return PI()*(r*r);
}

double PI(void)
{
    return 3.1416;
}
