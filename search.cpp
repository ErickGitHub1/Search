#include <stdio.h>
//#include <iostream>
#include <algorithm>
//using namespace std;

int main()
{
//utworzenie tablicy liczb	
int tablica_liczb[5] = {1,4,3,2,5};


//sortowanie tablicy
std::sort( tablica_liczb, tablica_liczb + 6 );

//wyswietlenie posortowanej tablicy
for(int i  = 0  ; i < 5 ; i++)
{
	printf("%d", tablica_liczb[i]);
	printf("\n");
}		

//wyszukiwanie liniowe
return 0;
}
