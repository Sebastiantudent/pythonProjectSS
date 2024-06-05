#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <wchar.h>


struct element
{
    int i;
    struct element*next;
};
struct element *utworz()
{
    return NULL;
}
///7.2.1
struct trojkat
{
    double a,b,c;
};
///7.2.2
void przepisz(struct trojkat t1, struct trojkat * t2)
{
    *t2=t1;
};
struct punkt
{
    double x,y,z;
};
double najmniesza_odleglosc(struct punkt tab[],int n)
{
    int i,j;
    double pom;
    double min=sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            pom=sqrt(pow(tab[j].x-tab[i].x,2)+pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
            if(min>pom)
            {
                min=pom;
            }
        }
    }
    return min;
};
///7.2.3
///7.3.7

struct element * usun(struct element * Lista, int a)
{
    struct element *wsk,*wsk2;
    if(Lista==NULL)
    {
        return Lista;
    }
    wsk=Lista;
    if(Lista->i==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else{
        while((wsk->next!=NULL)&&(wsk->i!=a))
        {
            wsk=wsk->next;
        }
        if (wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
        return Lista;
    }
}

struct element * usunw(struct element * Lista, struct element * elem)
{
    struct element *wsk,*wsk2;
    if(Lista==NULL)
    {
        return Lista;
    }
    wsk=Lista;
    if(Lista==elem)
    {
        Lista=Lista->next;
        free(wsk);
        return Lista;
    }
    while((wsk->next!=NULL)&&(wsk->next!=elem))
        wsk=wsk->next;
    if(wsk->next!=NULL)
    {
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
    }
    return Lista;
};
///cw 7.3.10
struct element * utworzglowa()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
};

///cw 7.3.12
struct element * dodajnapoczatekzglowa(struct element * Lista,int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista->next=wsk;
};
///cw 7.3.20
void zeruj(struct element * Lista)
{
    while(Lista!=NULL)
        Lista->i=0;
    Lista=Lista->next;
};
void bezwzgledna(struct element * Lista)
{
    while(Lista!=NULL){
        Lista->i=abs(Lista->i);
    }
    Lista=Lista->next;

}
int suma(struct element * Lista)
{
    int suma=0;
    while(Lista!=NULL)
    {
    suma+=Lista->i;
    }
    Lista=Lista->next;

    return suma;
}
int minimum(struct element * Lista)
{
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(min>Lista->i)
        {
            min=Lista->i;
        }
            Lista=Lista->next;

    }
    return min;
}
int minimumzglowy(struct element * Lista)
{
    Lista=Lista->next;
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(min>Lista->i)
        {
            min=Lista->i;
        }
            Lista=Lista->next;

    }
    return min;
}
///7.3.26
struct element * minimumwskaznik(struct element * Lista)
{
    struct element * wsk;
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(min>Lista->i)
        {
            min=Lista->i;
            wsk=Lista;
        }
            Lista=Lista->next;

    }
    return wsk;
}
///7.3.29
struct element * kopiuj(struct element * Lista)
{
    struct element * kopia=utworz();
    while(Lista != NULL)
    {
        //kopia=dodajnakoniec(kopia,lista -> i);
        Lista=Lista->next;
    }
    return kopia;


};
struct element * konkatenacja(struct element * Lista1,struct element * Lista2)
{
    struct element * wsk=Lista1;
    while(wsk->next != NULL)
    {
        wsk=wsk->next;
        wsk->next=Lista2;
    }

};
///7.3.32
struct element * sklejnaprzemiennie(struct element * Lista1, struct element * Lista2)
{
    struct element * wsk1, *wsk2;
    if(Lista1==NULL)
    {
        return NULL;
    }
    wsk1=wsk2=Lista1;
    Lista1=Lista1->next;
    wsk2->next=Lista2;
    wsk2=Lista2;
    Lista2=Lista2->next;
    while(Lista1 != NULL)
    {
        wsk2->next=Lista1;
        wsk2=Lista1;
        Lista1=Lista1->next;
        wsk2->next=Lista2;
        wsk2=Lista2;
        Lista2=Lista2->next;
    }
    return wsk1;
};
///7.3.31
/*
struct element * odwroc(struct element * lista)
{
    struct element * pom1, * pom2;
    if(lista==NULL)||(lista->next==NULL)
    {
        return lista;
    }
    pom1=lista->next;
    pom2=pom1->next;
    lista->next=NULL;
    pom1->next=lista;
    while(pom2!=NULL)
    {
        lista=pom1;
        pom1=pom2;
        pom2=pom2->next;
        pom1->next=lista;
    }
    return pom1;
};
*/
int main()
    {
        struct element * lista_pierwsza=utworz();
        struct element * lista_druga=utworz();
        struct element * lista_trzecia=utworz();
        struct punkt pierwszy,drugi,trzeci;
        pierwszy.x=4;
        pierwszy.y=7;
        pierwszy.z=1;
        drugi.x=2;
        drugi.y=2;
        drugi.z=8;
        trzeci.x=5;
        trzeci.y=6;
        trzeci.z=0;
        struct punkt tab[3]={pierwszy,drugi,trzeci};
        printf("%f\n",najmniesza_odleglosc(tab,3));
        printf("%d",sizeof(struct punkt));
        //lista_pierwsza=dodajnakoniec(lista_pierwsza,4); itd.
        //...
        //lista_druga=dodajnakoniec(lista_pierwsza,11); itd.
        //...
        //lista_trzecia=sklejnaprzemiennie(list_pierwsza,lista_druga);
        return 0;
    }
