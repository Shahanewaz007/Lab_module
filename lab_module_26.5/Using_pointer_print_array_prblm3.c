#include<stdio.h>

int main()
{

   solve();

    return 0;
}

void solve(void)
{
    int n;
    scanf("%d",&n);

    int ar[n+1];

    array_input(ar,n);

    print_array(ar,n);
}

void array_input(int* p, int sz)
{
    for(int i=0; i<sz; i++)
    {
        scanf("%d",(p+i));
    }
}

void print_array(int* p, int sz)
{
    for(int i=0; i<sz; i++)
    {
        printf("%d ",*(p+i));
    }
}

