#include<stdio.h>

void cheak_character_even_or_odd(char* p, int sz);

int main()
{

   char s[100];

   scanf("%s",s);

   int n = strlen(s);

   cheak_character_even_or_odd(s,n);

   printf("\n");
   puts(s);

    return 0;
}

void cheak_character_even_or_odd(char* p, int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(*(p+i)%2==0)
        {
            *(p+i) -= 32;
        }
    }
}
