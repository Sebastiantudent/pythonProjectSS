#include<stdio.h>
#include<stdlib.h>

int** alokuj(unsigned int n, unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc((i+1)*sizeof(int));
}
return t;
}

int sumuj2(int** t, unsigned int n, unsigned int m){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        S=S+t[i][j];
    }
}
return S;
}

int sumuj3(unsigned int n,unsigned int m, int t[][m]){
int i,j;
int S=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        S=S+t[i][j];
    }
}
return S;
}

void zeruj2(int** t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}
void wczytaj(int** t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
}

void wypisz(int **t, unsigned int n, unsigned int m)
{

}

void zeruj3(unsigned int n, unsigned int m, int t[][m]){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        t[i][j]=0;
    }
}
}

void wypisz2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}

int indeks_wiersza(int **t,unsigned int n, unsigned int m)
{
    int i,j;
    int S,max,indeks;
    for(i=0;i<n;i++)
    {
        S=0;
        for(j=0;j<m;j++)
        {
            S=S+t[i][j];
        }
        if(i==0)
        {
            max=S;
            indeks=0;
        }
        if (max<S)
            {
                max=S;
                indeks=i;
            }
    }
    return indeks;
}
//maksymalna suma z wiersza i...
int main()
{
    int **t=alokuj(2,2);
    wczytaj(t,2,2);
    wypisz(t,2,2);
    printf("%d",sumuj2(t,2,2));
}
