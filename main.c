#include <stdio.h>
#include <stdlib.h>
int dzielnik_wlasciwy(int x)
{
    int k,s,i;
        for(i=x-1;i>=1;i=i-1)
        {
            if(x%i==0)
            {

                k=i;

                return k;

            }
        }

}

int n_liczba_pierwsza(int n)
{
    int s=0;
    for(int i=2;;i++)
    {
        if(dzielnik_wlasciwy(i)==i)
        {
            s=s+1;
            if(n==s)
            {
                printf("%d",i);
                break;
            }
        }
    }
}

int blizniacze_liczby_pierwsze()
{
    int a,b;
    for(int i=3;i<1000;i++)
    {
        if(dzielnik_wlasciwy(i)==1)
        {
            a=i;
            for(int j=i+1;j<1000;j++)
            {
                if(dzielnik_wlasciwy(j)==1)
                {
                     b=j;
                    printf("(%d,%d),",a,b);
                    if(a==991 && b==997)
                    {
                        printf("(%d,%d)",a,b);
                    }

                    break;


                }

            }

        }
    }
}

int main()
{
blizniacze_liczby_pierwsze();

return 0;
}
