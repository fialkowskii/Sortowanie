#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "SORTOWANIE.h"

using namespace std;



int main()
{
	int wybor;
	cout << "Wylosowane liczby od 0 do 1000: \n";
	SORTOWANIE abc;
	abc.losowanie();
	cout << "\n\n";

	cout << "============================================\n"
		<< " 1. Sortowanie babelkowe\n"
		<< " 2. Sortowanie poprzez wstawienie\n"
		<< " Wybierz: ";
	cin >> wybor;
	if (wybor == 1) {
		abc.babelkowe();
	}

	if (wybor == 2) {
		abc.wstawieniowe();
	}
	return 0;
}