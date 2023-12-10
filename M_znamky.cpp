// M_znamky.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "M_znamky.h"
using namespace std;


int* PocetZnamek(int* znamky, int n)
{
	/* Staticke pole, kde se uklada pocet jednotlivych znamek. */
	static int skalaZnamek[5] = { 0 };
	
	/* Prochazeni pole znamky. Pocitaji se jednotlive znamky a zapisuji, resp. pricitaji se dle hodnoty do pole skalaZnamek. */
	for (int i = 0; i < n; i++)
	{
		if ((znamky[i] >= 1) && (znamky[i] <= 5))
		{
			/* Indexace ponizena o -1, jelikoz se indexuje od nuly a v poli by tak nebyly odpovidajici znamky. */
			skalaZnamek[znamky[i] - 1]++;
		}

		else
		{
			cout << "Znamka " << znamky[i] << " neni platna znamka." << endl;
			continue;
		}
	}
	return skalaZnamek;
}

void vypisZnamek(int znamky[], int n)
{
	int* mojeZnamkyZari = PocetZnamek(znamky, n);

	for (int i = 0; i < 5; i++)
	{
		cout << "Znamka " << i + 1 << ": " << mojeZnamkyZari[i] << endl;
	}
}

int main()
{
	int n = 10;
	int znamky[10] = { 1, 3, 3, 5, 4, 1, 2, 1, 5, 1 };
	vypisZnamek(znamky, n);
}