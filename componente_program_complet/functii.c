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

void afisare_subvectori(int v[],int a, int b, int c, int d, int n, int alg1, int alg2) // afisarea celor 3 sectiuni, aferente celor 2 variante de algoritmi
{
    FILE * output;
    output=fopen("date_iesire.txt","w");

    fprintf(output,"Date intrare generate automat: ");
    for(int i=0; i<n; i++)
        fprintf(output,"%d ",v[i]);
    fprintf(output,"\n\n");

    if(alg1==1)
    {
        fprintf(output,"***Prima metoda:***\n");

        fprintf(output,"Prima sectiune(%d - %d): ",0,a);
        for(int i=0; i<=a; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii I: %d \n\n",suma_subvector(v,0,a));

        fprintf(output,"A doua sectiune(%d - %d): ",a+1,b);
        for(int i=a+1; i<=b; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii II: %d \n\n",suma_subvector(v,a+1,b));

        fprintf(output,"A treia sectiune(%d - %d): ",b+1,n-1);
        for(int i=b+1; i<n; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii III: %d\n\n",suma_subvector(v,b+1,n-1));
    }

    if(alg2==1)
    {
        fprintf(output,"***A doua metoda - mai eficienta:***\n");

        fprintf(output,"Prima sectiune(%d - %d): ",0,c);
        for(int i=0; i<=c; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii I: %d \n\n",suma_subvector(v,0,c));

        fprintf(output,"A doua sectiune(%d - %d): ",c+1,d);
        for(int i=c+1; i<=d; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii II: %d \n\n",suma_subvector(v,c+1,d));

        fprintf(output,"A treia sectiune(%d - %d): ",d+1,n-1);
        for(int i=d+1; i<n; i++)
            fprintf(output,"%d ",v[i]);
        fprintf(output,"\n");
        fprintf(output,"Totalul sectiunii III: %d\n\n",suma_subvector(v,d+1,n-1));
    }

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
