#pragma once
#ifndef M_ZNAMKY_H
#define M_ZNAMKY_H

class M_znamky
{

public:
	/* Metoda vraci pole s poctem jednotlivych znamek studenta. Vstupnim parametrem je pole znamek.
	Metoda pouziva linearni vyhledavaci metodu, jelikoz se jedna o primy pruchod polem, bez nejakeho puleni, skoku a tak podobne. */
	int* PocetZnamek(int *znamky, int n);

	/* Metoda vypise pocty jednotlivych znamek. Vstupnim parametrem je pole znamek. */
	void vypisZnamek(int znamky[], int n);

};

#endif
