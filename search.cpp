#include <stdio.h>
//#include <iostream>
#include <algorithm>
//using namespace std;

#define ROZMIAR_TABLICY 5

int main()
{
//utworzenie tablicy liczb	
int tablica_liczb[ROZMIAR_TABLICY] = {1,4,3,2,5};
int indeks = 0;
int szukany_element = tablica_liczb[2];

//sortowanie tablicy
std::sort( tablica_liczb, tablica_liczb + 6 );

//wyswietlenie posortowanej tablicy
for(int i  = 0  ; i < 5 ; i++)
{
	printf("%d", tablica_liczb[i]);
	printf("\n");
}		


//wyszukiwanie liniowe
while(indeks <= (ROZMIAR_TABLICY - 1))
{
	if(tablica_liczb[indeks] == szukany_element)
	{
		printf("Odnaleziono element %d pod indeksem %d", szukany_element, indeks);
		break;
	}	
	indeks++;
};


return 0;
}
