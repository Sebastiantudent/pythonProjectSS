#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <wchar.h>
int * alokujblok(unsigned int n){
return malloc(n*sizeof(int));
}
double * alokujbloki(unsigned int n){
return malloc(n*sizeof(double));
}
/*
double funkcja(double (*fun)(int x),(int y))
{
    return fun(y);
}
double testowa(int x)
{
    return x*x;
}
*/
bool funkcjaporownujaca(int (*fun1)(int x),int(*fun2)(int y), unsigned int n)
{
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(!(fun1(i)==fun2(i)))
            return false;
    }
    return true;
}
int testowa(int x)
{
    return pow(x,2);
}
int testowa_2(int x)
{
    return x;
}
void funkcja_przepisujaca(const int * x,int * y)
{
    *y=*x;
}
bool funkcja_liczby_dos(unsigned int x)
{
    int isum=0;
for (int i=1;i<=(x/2);i++)
{
    if(x%i == 0)
        isum+=i;
}
return isum==x;
}
void perfect(int lower, int upper)
{
    for(int i=lower; i<=upper;i++)
    {
        if(funkcja_liczby_dos(i))
            printf("%d\n",i);
    }
}
void wypisz( unsigned int n, int* tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}
void tablica_0(unsigned int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;

    }
}
void tablica_i(unsigned int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;

    }
}
void tablica_podwajajaca(unsigned int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=tab[i]*2;

    }
}
void tablica_bezwzgledna(unsigned int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=abs(tab[i]);

    }
}
void srednia_arytm_tablic(unsigned int n, int * tab)
{
    float m=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        m+=tab[i];
    }
    m=m/n;
}
void sum_tablicy(unsigned int n, int * tab)
{
    float m=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        m+=tab[i];
    }

}
void sum_kwadratow_tablicy(unsigned int n, int * tab)
{
    float m=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        m+=tab[i]*tab[i];
    }

}
float srednia_arytm(unsigned int n,const int * tab)
{
    float m=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        m+=tab[i];
    }
    m=m/n;
    return m;
}
float srednia_geometryczna(unsigned int n, int * tab)
{
    float m=1.0;
    int i;
    for(i=0;i<n;i++)
    {
        m=m*tab[i];
    }
    m=pow(m,1./n);
    return m;
}
int sito_Erastotelesa(unsigned int n)
{
    int i,j,pom;
    bool sito[n];
    for(i=0;i<n;i++)
    {
        sito[i]=true;
    }
    for(i=2;i<n;i++)
    {
        if(sito[i])
        {
            for(j=2*i;j<n;j=j+i)
            {
                sito[j]=false;
            }
            pom=i;

        }
    }
    return pom;
}
void przepisanie(unsigned int n, int * tab1,int * tab2)
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}
void przepisanie_2(unsigned int n, int * tab1,int * tab2)
{
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        tab2[i]=tab1[j];
    }
}
void przepisanie_3(unsigned int n, int * tab1,int * tab2,int * tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}
void przepisanie_4(unsigned int n, int * tab1,int * tab2,int * tab3)
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>=tab2[i])
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3[i]=tab2[i];
        }
    }
}
void przepisanie_5(unsigned int n, int * tab1,int * tab2,int * tab3)
{
    int pom;
    for(int i=0;i<n;i++)
    {
        pom=tab1[i];
        tab1[i]=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=pom;
    }
}
void przepisanie_dwoch_tab_do_jednej(unsigned int n,double * tab1,double * tab2,double * tab3)
{
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3[i]=tab2[i-n];
        }
    }

}
void przepisanie_dwoch_tab_do_jednej_2(unsigned int n,double * tab1,double * tab2,double * tab3)
{
    for(int i=0;i<2*n;i++)
    {
        if(i%2==1)
        {
            tab3[i]=tab1[(i-1)/2];
        }
        else
        {
            tab3[i]=tab2[i/2];
        }
    }


}
void wypisz_double( unsigned int n, double * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}
int wypisz_najw(unsigned int n, int * tab)
{
    int S=tab[0];
    for(int i=1;i<n;i++)
    {
        if(S<tab[i])
        {
            S=tab[i];
        }
    }
    return S;
}
int wypisz_najm(unsigned int n, int * tab)
{
    int S=tab[0];
    for(int i=1;i<n;i++)
    {
        if(S>tab[i])
        {
            S=tab[i];
        }
    }
    return S;
}
int wypisz_najw_indeks(unsigned int n, int * tab)
{
    int S=tab[0],t=0,k;
    for(int i=1;i<n;i++)
    {

        if(S<tab[i])
        {
            k=i;
        }
    }
    return k;
}
int wypisz_najw_bezwl(unsigned int n, int * tab)
{
    int S=tab[0];
    for(int i=1;i<n;i++)
    {
        if(S<abs(tab[i]))
        {
            S=tab[i];
        }
    }
    return S;
}
double iloczyn_skalarny(unsigned int n, double * tab1, double * tab2)
{
    double S=0.0;
    for(int i=0;i<n;i++)
    {
        S=S+tab1[i]*tab2[i];
    }
    return S;
}
void odwrocenie(unsigned int n, int * tab)
{
    int pom;
    for(int i=0;i<n/2;i++)
    {
        pom=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=pom;

    }
}
void przesuniecie(unsigned int n, int * tab)
{
    int S;
    for(int i=0;i<n/2;i++)
    {
        S=tab[i];
        tab[i]=tab[n-1];
        tab[n-1]=S;
    }
}
void zwolnij_pamiec(int * tab)
{
    free(tab);
}
void wyczysc(char * napis)
{
    napis[0]=0;
}
int dlugosc(char * napis)
{
        int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}
bool porownaj(char * napis1,char * napis2)
{
    int i=0;
    int dl1=dlugosc(napis1), dl2=dlugosc(napis2);
    if(dl1==dl2)
    {
        for(i;i<=dl2-1;i++)
        {
            if(napis1[i]!=napis2[i])
            {
                return false;
            }
            return true;
        }
    }
    else
        return false;

}
///cw5_2_4
int leks(char * napis1,char * napis2)
{
    int i,x;
    for(i=0;napis1[i] || napis2[i];i++)
    {
        if(napis1[i]==0 && napis2[i]!=0)
        {
            return 0;
        }
        if(napis2[i]==0 && napis1[i]!=0)
        {
            return 1;
        }
        if(napis2[i]==0 && napis1[i]==0)
        {
            for(x=0;napis1[x];x++)
            {
                if(napis1[x]<napis2[x]==0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
void przepisz(char * tab1, char * tab2)
{
    int i;
    int dl1=dlugosc(tab1);
    for(i=0;i<dl1;i++)
    {
        tab2[i]=tab1[i];
    }
    tab2[dl1]=0;
}
void kopiujn(char * nap1, char * nap2,int n)
{
    int i=0;
    int dl1=dlugosc(nap1);
    for(i;i<dl1 && i<n;i++)
        {
            nap2[i]=nap1[i];
        }


}
void sklej(char * nap1,char * nap2,char * nap3)
{
    int i=0,j,x=0;
    int dl1=dlugosc(nap1),dl2=dlugosc(nap2);
    for(i;i<dl1;i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=i;j<dl1+dl2;j++)
    {
        nap3[j]=nap2[x];
        x++;
    }
    nap3[j]=0;

}
///5_2_8
void male_na_duze(char * nap)
{
    for(int i=0;nap[i]!=0;i++)
    {
        if((nap[i]>='a')&&(nap[i]<='z'))
        {
            nap[i]=nap[i]+'A'-'a';
        }
    }
}
void wytnij(int n,int m, char * nap)
{
    int i ,j;
    for(j=0;nap[j]!=0;j++)
    {}
        if(j+1>m)
        {
            for(i=0;i+m<j;i++)
            {
                nap[n+i]=nap[m+i+1];
            }
        }
        else if((n<j)&&(j+1<=m))
        {
            nap[n]=0;
        }

}
void wytnij2(char * napis1,char * napis2)
{
    int i ,dl;
    for(dl=0;(napis1[dl]!=0)&&napis2[dl]!=0;dl++)
    {}
        for(i=0;napis1[i]!=0;i++)
        {
            if(porownaj(napis1,napis2))
            {
                wytnij(napis1,i,i+dl-1);
            }
        }


}
///5_2_11
/*
void wytnijz(char * napis1,char*napis2)
{
    int i,dl,j;
    int znaki[256];
    for(dl=0;napis2[dl]!=0;dl++)
    {
        znaki[napis2[dl]]=1; ///zapamietuje znaki w napisie 2
    }
    for(i=0,j=0;napis1[i]!=0;i++)
        {
            if(znaki[napis1[i]]==0)
            {
                napis1[j]=napis1[i];
                j++;
            }
            napis1[j]=0;
        }
}
*/
void wytnijm(char * nap1, char*nap2)
{
    int i,j=0;
    for(i=0;nap1[i]!=0;i++)
    {
        if(nap1[i]!=nap2[i])
        {
            nap1[j]=nap1[i];
           j++;
        }
        nap1[j]=0;
    }
}
///char * sklejnapisy(char * napis1, char*napis2,char*napis3)
///char * wynik=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(char));
///strlen oblicza dlugosc lancucha
///strcpy(wynik.napis1)
///strcat(wynik,napis2)

void maleduze(char* napis)
{
    int i;
    for(i=0;napis[i]=!0;i++)
    {
        napis[i]=towupper(napis[i]);
    }
}
char * godzina(unsigned int godz,unsigned int min,unsigned int sek)
{
    char * wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;

}
char * anagram(char * napis)
{
    char * nap;
    int i,dl;
    for(dl=0;napis[dl]!=0;dl++)
    {
    }
    for(i=0;napis[i]!=0;i++)
    {
        nap[i]=napis[i];
        napis[i]=napis[dl-i];
        napis[dl-i]=nap[i];
    }
    return napis;
}
int main()
{
        /*
        printf("rozmiar zmiennej calkowitej to %d\n",sizeof(int));
        printf("Rozmiar bloku zmiennych to: %d\n",10*sizeof(int));
        printf("Rozmiar zmiennej naturalnej to: %d\n",sizeof(unsigned int));

        printf("rozmiar zmiennej calkowitej to %d\n",sizeof(double));
        printf("Rozmiar bloku zmiennych to: %d\n",10*sizeof(double));

        int x=5;
        printf("%f\n", testowa(x));
    double(*wskaznikdofunkcji)(int);
    wskaznikdofunkcji=&testowa;
    printf("%p\n",wskaznikdofunkcji);
    printf("%f\n",funkcja(wskaznikdofunkcji,8));

    int (*wskaznikdofunkcji1)(int);
    wskaznikdofunkcji1=&testowa;
    int (*wskaznikdofunkcji2)(int);
    wskaznikdofunkcji2=&testowa_2;
    printf("%d\n",funkcjaporownujaca(*wskaznikdofunkcji1, *wskaznikdofunkcji2,2));

    const int x=34;
    int y=42;
    const int* wsk_x=&x;
    int * wsk_y=&y;

    perfect(1,100000);
    return 0;

    printf("\n\n cw4_2_0\n\n");
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6; tab[1]=2;tab[2]=5;tab[3]=8;
    wypisz(rozmiar,tab);
    printf("%d\n",*tab);
    int tab2[]={1,2,3,4};
    wypisz(rozmiar,tab2);

    tablica_0(rozmiar,tab);
    wypisz(rozmiar,tab);
    tablica_i(rozmiar,tab);
    wypisz(rozmiar,tab);
    tablica_podwajajaca(rozmiar,tab);
    wypisz(rozmiar,tab);
    tablica_bezwzgledna(rozmiar,tab);
    wypisz(rozmiar,tab);
    printf("%f\n",srednia_arytm(rozmiar,tab));
    int tab3[]={1,2,8,1};
    printf("%f\n",srednia_geometryczna(rozmiar,tab3));

    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6; tab[1]=2;tab[2]=5;tab[3]=-18;
    wypisz(rozmiar,tab);
    printf("%d\n",*tab);
    int tab2[]={1,2,8,4};
    int tab3[]={1,2,3,4};
    przepisanie_4(4,tab,tab2,tab3);
    wypisz(rozmiar,tab3);
    printf("%d\n",wypisz_najw_bezwl(rozmiar,tab2));

        int rozmiar=4;
    int tab5[]={1,2,3,4};
    odwrocenie(rozmiar,tab5);
    wypisz(rozmiar,tab5);

    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(wchar_t));
    printf("%d\n",'A');
    printf("%d\n",'B');
    printf("%d\n",'a');
    printf("%d\n",'b');
    printf("%d\n",'0');

    for (int i=0;i<=127;i++)
    {
        printf("%d %c \n",i,i);
    }

    char*napis="pieczewo";
    printf(napis);
    wyczysc(napis);
    printf(napis);
    free(napis);
    printf("%d\n",dlugosc(napis));

    printf("%d\n",leks("arbiter","arbuz"));

    char*napis1="Arbiter m";
    char napis2[20]="a arbuza"; //char * napis2 = malloc(20*sizeof(char));
   char napis3[40]="widzisz tooooooooooooooooo";
    sklej(napis1,napis2,napis3);
    printf(napis3);
    male_na_duze(napis1);
    printf(napis1);

    char napis1[20]="Arbiter";
    wytnij(2,5,napis1);
    printf(napis1);

    char napis1[20]="matematyka";
    char napis2[20]="infomatyka";
    wytnijm(napis1,napis2);
    printf(napis1);
    */
    char * napis1="matematyka";
    printf("%d",anagram(napis1));


    }
