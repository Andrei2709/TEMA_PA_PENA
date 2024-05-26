#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functii.h"

#define VECTOR_SIZE 3000 // numarul de carti
#define MAX_SIZE_BOOK 1000 // numarul maxim de pagini al unei carti
#define ALGORITM_1 1 // 1- daca se va folosi primul algoritm (rezultatul cel mai bun)
#define ALGORITM_2 1 // 1- daca se va folosi al doilea algoritm (rezultatul aproximativ, mult mai eficient)

int poz1,poz2,pozi,pozj; // indicii pozitiilor care despart vectorul in 3 subvectori (primii 2 - primul algoritm, ultimii 2 - al doilea)

int main()
{


    int v[VECTOR_SIZE]; // vector pentru a memora numarul paginilor fiecarei carti

    srand(time(NULL));

    for (int i=0; i<VECTOR_SIZE; i++)
        v[i]=rand()%MAX_SIZE_BOOK+1; // generare elemente vector automat (0 < numar pagini <= MAX_SIZE_BOOK)

    int suma_totala_vector=0;
    for(int i=0; i<VECTOR_SIZE; i++)
        suma_totala_vector+=v[i]; // se calculeaza suma totala a tuturor paginilor

    if(ALGORITM_1==1) // daca se foloseste primul algoritm
    {

        // vom cauta diferenta minima dintre suma maxima si suma minima a tuturor subvectorilor posibili

        int diferenta_min = suma_totala_vector; // se initializeaza diferenta minima cu numarul total de pagini

        // vectorul va fi impartit in 3 subvectori, delimitate de 2 pozitii
        // pentru a verifica fiecare posibilitate, ne vom folosi de variabilele i si j ( 0<i<j<VECTOR_SIZE )

        for(int i=0; i<VECTOR_SIZE-2; i++) // prima pozitie (i)
        {
            for(int j=i+1; j<VECTOR_SIZE-1; j++) // a doua pozitie (j)
            {
                int suma_subv1=suma_subvector(v,0,i); // suma elementelor primului subvector
                int suma_subv2=suma_subvector(v,i+1,j); // suma elementelor celui de-al doilea subvector
                int suma_subv3=suma_subvector(v,j+1,VECTOR_SIZE-1); // suma elementelor celui de-al treilea subvector

                int suma_subv_max=max_3nr(suma_subv1,suma_subv2,suma_subv3); // se cauta subvectorul cu suma maxima
                int suma_subv_min=min_3nr(suma_subv1,suma_subv2,suma_subv3); // se cauta subvectorul cu suma minima

                int diferenta=suma_subv_max-suma_subv_min; // se calculeaza diferenta dintre suma maxima si minima

                if(diferenta<diferenta_min) // se gaseste o diferenta mai mica decat cea anterioara, ajungandu-se la cea mai mica posibila
                {
                    diferenta_min=diferenta; // se actualizeaza diferenta minima pana in acel punct
                    poz1=i; // se salveaza prima pozitie
                    poz2=j; // se salveaza a doua pozitie
                }

            }
        }

    }

    if(ALGORITM_2==1) // daca se foloseste al doilea algoritm
    {

        int avg=suma_totala_vector/3; // calcularea mediei

        int semisuma1=0;
        pozi=0;
        while(semisuma1<avg) // pana cand paginile atribuite primului angajat ajung cel mai aproape de medie
        {
            semisuma1+=v[pozi];
            pozi++;
        }

        int semisuma2=0;
        pozj=pozi+1;
        while(semisuma2<avg) // pana cand paginile atribuite celui de-al doilea angajat ajung cel mai aproape de medie
        {
            semisuma2+=v[pozj];
            pozj++;
        }
    }

    afisare_subvectori(v,poz1,poz2,pozi,pozj,VECTOR_SIZE,ALGORITM_1,ALGORITM_2); // afisarea celor 3 sectiuni cu cei 2 algoritmi


    return 0;
}
