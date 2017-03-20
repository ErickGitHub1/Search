#include <stdio.h>
#include <stdlib.h>

int rozmiar_tablicy;
 
//void wyszukiwanie_liniowe(int *,int );
void wyszukiwanie_binarne(int*, int);
void wczytajTablice(int* );
void sortowanie_liniowe(int *, int );

int main()
{
int *tablica_liczb;
int poszukiwana_liczba;	
printf("Podaj rozmiar tablicy: ");
scanf("%d", &rozmiar_tablicy);

// Alokacja pamieci dla tablicy n elementow
tablica_liczb = (int*) malloc(rozmiar_tablicy * sizeof(*tablica_liczb));

// Wczytanie liczb do tablicy
wczytajTablice(tablica_liczb);

sortowanie_liniowe(tablica_liczb, rozmiar_tablicy);

printf("Posortowana tablica:\n");

for(int i  = 0 ; i < rozmiar_tablicy ; i++)
{
	printf("%d\n", tablica_liczb[i]);
}

// Wczytanie szukanej liczby
printf("Podaj szukana liczbe: ");
scanf("%d", &poszukiwana_liczba);

	
// Wyszukiwanie liniowe tablicy
//wyszukiwanie_liniowe(tablica_liczb , poszukiwana_liczba);
wyszukiwanie_binarne(tablica_liczb, poszukiwana_liczba);


free(tablica_liczb);

return 0;
}


// Funkcja do wyszukiwania liniowego
/*void wyszukiwanie_liniowe(int *tablica_do_przeszukania ,int poszukiwany_element)
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
}*/

// Funkcja do wyszukiwania binarnego
void wyszukiwanie_binarne(int* tablica, int poszukiwany_element)
{
	  int indeks_elementu_o_kluczu_k ;
	  int indeks_srodkowy = 0;
	  int obiegi = 0 ; 
	  int indeks_poczatkowy = 0; 
	  int indeks_koncowy = rozmiar_tablicy - 1;
	  
  while(indeks_poczatkowy <= indeks_koncowy)
  {
    obiegi++;
    indeks_srodkowy = (indeks_poczatkowy + indeks_koncowy)/2 ;
    
    if(tablica[indeks_srodkowy] == poszukiwany_element)
    {
      indeks_elementu_o_kluczu_k = indeks_srodkowy; 
      break;
    }
    else if(poszukiwany_element < tablica[indeks_srodkowy]) indeks_koncowy = indeks_srodkowy - 1;
    else indeks_poczatkowy = indeks_srodkowy + 1;
  }
   printf("Poszukiwany element %d znajduje sie pod indeksem %d", poszukiwany_element, indeks_elementu_o_kluczu_k);
}

// Wczytywanie tablicy
void wczytajTablice(int* tablica){
     int n=rozmiar_tablicy;
     int i=0;
 
     for(i = 0 ;i<n;i++){
					printf("Liczba %d: ", (i+1));
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
