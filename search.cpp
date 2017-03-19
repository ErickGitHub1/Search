#include <stdio.h>
#include <stdlib.h>
#include <algorithm>



int rozmiar_tablicy;

void sortowanie_liniowe(int *, int ); 
void wyszukiwanie_liniowe(int *,int );
void wczytajTablice(int* );

int main()
{
int *tablica_liczb;	
printf("Podaj rozmiar tablicy: ");
scanf("%d", &rozmiar_tablicy);

 
tablica_liczb = (int*) malloc(rozmiar_tablicy * sizeof(*tablica_liczb));
wczytajTablice(tablica_liczb);
	

//utworzenie tablicy liczb	
//int tablica_liczb[rozmiar_tablicy] = {1,4,3,4,5};

//sortowanie tablicy
sortowanie_liniowe(tablica_liczb, rozmiar_tablicy);  

//wyswietlenie posortowanej tablicy
for(int i  = 0  ; i < rozmiar_tablicy ; i++)
{
	printf("%d", tablica_liczb[i]);
	printf("\n");
}		

wyszukiwanie_liniowe(tablica_liczb , 4);

free(tablica_liczb);

return 0;
}


//Funkcja dla sortowania liniowego
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
