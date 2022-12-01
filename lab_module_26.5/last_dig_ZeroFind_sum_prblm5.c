#include<stdio.h>

void array_input(int* p, int sz);
int find_last_dig_zero_and_sum_that(int* p, int sz);

int main()
{

   int n;
   scanf("%d",&n);

   int ar[n+1];

   array_input(ar,n);

   int res = find_last_dig_zero_and_sum_that(ar,n);

   printf("\nThe sum of last digit zero = %d\n",res);


    return 0;
}

void array_input(int* p, int sz)
{
    for(int i=0; i<sz; i++)
    {
        scanf("%d",(p+i));
    }
}

int find_last_dig_zero_and_sum_that(int* p, int sz)
{
    int last_dig, sum=0;
    for(int i=0; i<sz; i++)
    {
        last_dig = *(p+i)%10;

        if(last_dig==0)
        {
            sum += *(p+i);
        }
    }
    return sum;
}

