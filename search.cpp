#include <stdio.h>
//#include <iostream>
#include <algorithm>
//using namespace std;

#define ROZMIAR_TABLICY 5

//Funkcja do wyszukiwanie liniowego
void wyszukiwanie_liniowe(int tablica_do_przeszukania[] ,int poszukiwany_element)
{
int indeks = 0;
int liczba_porownan = 0;
	
while(tablica_do_przeszukania[indeks] != poszukiwany_element)
{
	liczba_porownan++;
	indeks++;
}
if(indeks == ROZMIAR_TABLICY)
	{   
		printf("Brak elementu %d w tablicy", poszukiwany_element);
		
	}else
	{
		printf("Odnaleziono element %d pod indeksem %d", poszukiwany_element, indeks);
		printf("\nLiczba porownan: %d\n\n" , liczba_porownan);
	}	
}

int main()
{
//utworzenie tablicy liczb	
int tablica_liczb[ROZMIAR_TABLICY] = {1,4,3,4,5};

//sortowanie tablicy
std::sort( tablica_liczb, tablica_liczb + 6 );

//wyswietlenie posortowanej tablicy
for(int i  = 0  ; i < 5 ; i++)
{
	printf("%d", tablica_liczb[i]);
	printf("\n");
}		

wyszukiwanie_liniowe(tablica_liczb , 4);

return 0;
}
