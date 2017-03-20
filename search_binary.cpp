#include <stdio.h>
#include <stdlib.h>

int rozmiar_tablicy;
 
void wyszukiwanie_liniowe(int *,int );
void wczytajTablice(int* );
void sortowanie_liniowe(int *, int );

int main()
{
int *tablica_liczb;
int poszukiwana_liczba;	
printf("Podaj rozmiar tablicy: ");
scanf("%d", &rozmiar_tablicy);

 
tablica_liczb = (int*) malloc(rozmiar_tablicy * sizeof(*tablica_liczb));
wczytajTablice(tablica_liczb);

// Wczytanie szukanej liczby
printf("Podaj szukana liczbe: ");
scanf("%d", &poszukiwana_liczba);
		
// Wyszukiwanie liniowe tablicy
wyszukiwanie_liniowe(tablica_liczb , poszukiwana_liczba);

free(tablica_liczb);

return 0;
}


// Funkcja do wyszukiwanie liniowego
void wyszukiwanie_liniowe(int *tablica_do_przeszukania ,int poszukiwany_element)
{
int indeks = 0;
int liczba_porownan = 1;
	
while((tablica_do_przeszukania[indeks] != poszukiwany_element) && (indeks < rozmiar_tablicy))
{
	
	liczba_porownan++;
	indeks++;
}
if(indeks == rozmiar_tablicy)
	{   
		printf("Brak elementu %d w tablicy", poszukiwany_element);
		printf("\nLiczba porownan wynosi %d:", liczba_porownan);
		
	}else
	{
		printf("Odnaleziono element %d pod indeksem %d", poszukiwany_element, indeks);
		printf("\nLiczba porownan wynosi: %d\n\n" , liczba_porownan);
	}	
}

// Wczytywanie tablicy
void wczytajTablice(int* tablica){
     int n=rozmiar_tablicy;
     int i=0;
 
     for(i = 0 ;i<n;i++){
                    scanf("%d",&(*tablica)+i);
                    }     
     }
     
// Funkcja dla sortowania liniowego
 void sortowanie_liniowe(int *tab, int r) 
 { 
     int i, j, temp; 
     for (i = 0; i < r; i++) 
         for (j = 0; j < r-1; j++) 
         { 
             if (tab[j] > tab[j+1]) 
             { 
                 temp = tab[j+1]; 
                 tab[j+1] = tab[j]; 
                 tab[j] = temp; 
             } 
         } 
 }    
