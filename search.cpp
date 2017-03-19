#include <stdio.h>
#include <stdlib.h>
#include <algorithm>



int rozmiar_tablicy;

 
void wyszukiwanie_liniowe(int *,int );
void wczytajTablice(int* );

int main()
{
int *tablica_liczb;	
printf("Podaj rozmiar tablicy: ");
scanf("%d", &rozmiar_tablicy);

 
tablica_liczb = (int*) malloc(rozmiar_tablicy * sizeof(*tablica_liczb));
wczytajTablice(tablica_liczb);
		
//wyszukiwanie liniowe tablicy
wyszukiwanie_liniowe(tablica_liczb , 4);

free(tablica_liczb);

return 0;
}


//Funkcja do wyszukiwanie liniowego
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
		
	}else
	{
		printf("Odnaleziono element %d pod indeksem %d", poszukiwany_element, indeks);
		printf("\nLiczba porownan: %d\n\n" , liczba_porownan);
	}	
}

//wczytywanie tablicy
void wczytajTablice(int* tablica){
     int n=rozmiar_tablicy;
     int i=0;
 
     for(i = 0 ;i<n;i++){
                    scanf("%d",&(*tablica)+i);
                    }     
     }
