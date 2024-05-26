# TEMA_PA_PENA

Acest repository conține fișierele sursă și pentru programul ce conține cele două variante de algoritmi (cel care dă răspunsul exact și cel care este foarte eficient din punct de vedere al timpului de execuție) ([**componente_program_complet**](https://github.com/Andrei2709/TEMA_PA_PENA/tree/main/componente_program_complet)), dar și fișierele pentru programul ce se folosește doar de primul algoritm, care dă răspunsul cel mai exact ([**componente_program_exact**](https://github.com/Andrei2709/TEMA_PA_PENA/tree/main/componente_program_exact)). Fiecare director conține fișierul ***main.c***, un fișier cu funcțiile folosite ***functii.c***, cât și fișierul header al acestuia ***functii.h***. Datele de ieșire vor fi vizibile în fișierul text ***date_iesire.txt***. Pentru compilarea programului sunt necesare toate aceste fișiere. S-au mai inclus și fișiere de tip ***.cbp***, în cazul în care compilarea se va face utilizând CodeBlocks. 

>[!TIP]
>Se recomandă utilizarea programului complet și selectarea folosirii celor doi algoritmi, în funcție de testele care vor fi făcute (analiza timpului de execuție, corectitudinea rezultatelor, etc.). 😄
>
>Cei doi algoritmi se activează/dezactivează la începutul codului din:
>
>*#define ALGORITM_1 1 // 1 - daca se va folosi primul algoritm (rezultatul cel mai bun)*
>
>*#define ALGORITM_2 1 // 1 - daca se va folosi al doilea algoritm (rezultatul aproximativ, mult mai eficient)*
