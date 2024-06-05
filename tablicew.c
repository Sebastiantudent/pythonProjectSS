#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <wchar.h>
#define a1 3
#define a2 3
#define b1 3
#define b2 3
void MatrixAddition(int n, int m, int A[m][n], int B[m][n], int result[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            result[i][j]=A[i][j]+B[i][j];
    }
}
void MatrixMultiplication(int m, int n,int p,int A[m][n],int B[n][p],int result[m][p])
{
    int i,j,k,sum;
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum+=A[i][k]*B[k][j];
                result[i][j]=sum;
            }
        }
}
int MatrixTrace(int n,int matrix[n][n])
{
    int trace=0;
    for(int i=0;i<n;i++)
    {
        trace+=matrix[i][i];
    }
    return trace;
}

void wypisz(int m,int n,int matrix[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

}
///6.2.1
///tablica tablic
int ** alokuj(unsigned int n,unsigned int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}
///tablica dwuwymiarowa
int(* alokuj2(unsigned int n, unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}
void wypisz2(int**t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",&t[i][j]);
        }
        printf("\n");
    }
}
void wczytaj2(unsigned int n,unsigned int m,int t[][m])
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
void zwolnij2(unsigned int n,unsigned int m,int t[][n])
{
    free(t);
}
///6.2.7
int**tab_dwu_troj(unsigned int n)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
     t[i]=malloc((i+1)*sizeof(int));
    }
}
///6.2.9
void zeruj(unsigned int n,unsigned int m,int** t)
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
///6.2.10
void zeruj2(unsigned int n,unsigned int m, int t[][m])
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
///6.2.12
int suma(unsigned int n, unsigned int m, int**t)
{
    int i,j,suma=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            suma+=t[i][j];
        }
    }
    return suma;
}
///6.2.13
int suma2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j,suma=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            suma+=t[i][j];
        }
    }
    return suma;
}
///6.2.16
int wiersz(unsigned int n , unsigned int m, int t[][m])
{
    int i,j,S=0,max=0,indeks=0;
    for(i=0;i<n;i++)
    {
        S=0;
        for(j=0;j<m;j++)
        {
            S+=t[i][j];

        }
        if(S>max)
            {
                max=S;
                indeks=i;
            }
    }
    return indeks;
}
///6.2.19
void przepisanie(unsigned int n, unsigned int m, int **t, int **l)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            l[i][j]=t[i][j];
        }
    }
}
///6.2.20
void zamiana(unsigned int n, unsigned int m, int t[][m],int l[][m])
{
    int i,j,t2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t2=t[i][j];
            t[i][j]=l[i][j];
            l[i][j]=t2;
        }
    }
}
///6.2.22
void zamiana_wiersza(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m/2;j++)
        {
            //k=t[i][j];
            t[i][j]=t[i][m-1-j];
            //t[i][m-1-j]=k;
        }
    }
}
///6.2.23
void przesuwanie_wierszy(unsigned int n, unsigned int m, int**t)
{
    int i,j,pom;
    for(j=0;j<m;j++)
    {
        pom=t[n-1][j];
        for(n=n-1;i>0;i--)
        {
                t[i][j]=t[i-1][j];
        }
        t[0][j]=pom;
    }

}
///6.2.26
int**transpozycja(unsigned int n, unsigned int m, int**t1)
{
    int i,j,pom;
    int**t2=alokuj(m,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t2[i][j]=t1[j][i];
        }
    }
    return t2;
}
int zliczacz_zer(unsigned int n, unsigned int m, int t[][m])
{
    int i,j,suma=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(t[i][j]==0)
            {
                suma+=1;
            }
        }
    }
    return suma;
}
int main()
{
    ///tablica tablic
    /*
    int**t=alokuj(3,3);
    int**l=alokuj(3,3);
    wczytaj(t,3,3);
    przepisanie(3,3,t,l);
    wypisz2(l,3,3);
    zeruj(t,3,2);
    wypisz(t,3,2);
    */
    ///tablica dwuwymiarowa
    int k[a1][a2]={{3,2,1},{1,3,3},{4,5,2}};
    //printf("%d",wiersz(3,3,k));
    int A[a1][a2]={{-3,8,6},{3,0,-1},{6,-3,8}};
    int B[b1][b2]={{3,-2,2},{-2,-3,-5},{2,4,-6}};
    printf("%d",zliczacz_zer(3,3,A));
    //int result[a1][b2]={{0}};
    wypisz(3,3,A);
    //MatrixAddition(a1,a2,A,B,result);
    //MatrixMultiplication(a1,a2,b2,A,B,result);
    //wypisz(a1,a2,result);
    return 0;
}
