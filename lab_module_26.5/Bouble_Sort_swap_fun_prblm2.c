#include<stdio.h>

void solve(void);
void array_input(int *p, int sz);
void print_array(int *p, int sz);
void get_swap(int *p, int *q);

int main(void)
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

    get_sorted_array(ar,n);

    print_array(ar,n);
}

void array_input(int *p, int sz)
{
    for(int i=0; i<sz; i++)
        scanf("%d",p+i);
}

void print_array(int *p, int sz)
{
    for(int i=0; i<sz; i++)
        printf("%d ",*(p+i));
}

void get_sorted_array(int *p, int sz)
{
    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz-1; j++)
        {
            if(*(p+j)>*((p+j)+1))
            {
              get_swap((p+j),((p+j)+1));
            }
        }
    }
}

void get_swap(int* p, int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
