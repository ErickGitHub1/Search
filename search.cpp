#include <stdio.h>
#include <algorithm>


//#define ROZMIAR_TABLICY 5
int rozmiar_tablicy;
void sortowanie_liniowe(int *, int); 
void wyszukiwanie_liniowe(int tablica_do_przeszukania[] ,int poszukiwany_element);


int main()
{
	
printf("Podaj rozmiar tablicy: ");
scanf("%d", &rozmiar_tablicy);	
//utworzenie tablicy liczb	
int tablica_liczb[rozmiar_tablicy] = {1,4,3,4,5};

//sortowanie tablicy
sortowanie_liniowe(tablica_liczb, rozmiar_tablicy);  

//wyswietlenie posortowanej tablicy
for(int i  = 0  ; i < 5 ; i++)
{
	printf("%d", tablica_liczb[i]);
	printf("\n");
}		

wyszukiwanie_liniowe(tablica_liczb , 4);



return 0;
}


//Funkcja dla sortowania liniowego
void sortowanie_liniowe(int * tab, int r) 
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
void wyszukiwanie_liniowe(int tablica_do_przeszukania[] ,int poszukiwany_element)
{
int indeks = 0;
int liczba_porownan = 1;
	
while(tablica_do_przeszukania[indeks] != poszukiwany_element)
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
