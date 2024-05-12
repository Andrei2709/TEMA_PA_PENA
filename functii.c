#include <stdio.h>
#include <stdlib.h>
#include "functii.h"

int suma_subvector(int v[],int a, int b) // calculeaza suma elementelor unui subvector
{
    int s=0;

    for(int i=a; i<=b; i++)
        s+=v[i];

    return s;
}

void afisare_subvectori(int v[],int a, int b, int n) // afisarea celor 3 sectiuni
{
    FILE * output;
    output=fopen("date_iesire.txt","w");

    fprintf(output,"Prima sectiune: ");
    for(int i=0; i<=a; i++)
        fprintf(output,"%d ",v[i]);
    fprintf(output,"\n");

    fprintf(output,"A doua sectiune: ");
    for(int i=a+1; i<=b; i++)
        fprintf(output,"%d ",v[i]);
    fprintf(output,"\n");

    fprintf(output,"A treia sectiune: ");
    for(int i=b+1; i<n; i++)
        fprintf(output,"%d ",v[i]);

    fclose(output);
}

int max_3nr(int a, int b, int c) // maximul dintre 3 numere
{
    int temp;

    if(a>b) temp=a;
    else temp=b;

    if(c>temp) return c;
    else return temp;
}

int min_3nr(int a, int b, int c) // minimul dintre 3 numere
{
    int temp;

    if(a<b) temp=a;
    else temp=b;

    if(c<temp) return c;
    else return temp;
}
