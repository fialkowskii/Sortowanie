#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "SORTOWANIE.h"
#include <chrono>


using namespace std;



int main()
{
	int wybor;
	
	SORTOWANIE a;
	a.sort();
	
	cout << "\n============================================\n"
		<< " 1. Sortowanie babelkowe\n"
		<< " 2. Sortowanie poprzez wstawienie\n"
		<< " 3. Szybkie sortowanie\n"
		<< " 4. Sortowanie poprzez wybor\n"
		<< " Wybierz: " << endl;
	cin >> wybor;
	
	if (wybor == 2) {
		auto start = std::chrono::steady_clock::now();
		a.sortowanie_wstawienie();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;

		cout << "\n---------Sortowanie poprzez wstawianie--------------\n Czas: " << elapsed_second.count() << "s\n";
	}
	if (wybor == 3) {
		auto start = std::chrono::steady_clock::now();
		a.quickSort(0, a.w-1);
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;

		cout << "\n---------Qucik Sort--------------\n Czas: " << elapsed_second.count() << "s\n";
	}
	if (wybor == 4) {
		auto start = std::chrono::steady_clock::now();
		a.sortowanie_wybor();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;

		cout << "\n---------Sortowanie poprzez wybor--------------\n Czas: " << elapsed_second.count() << "s\n";

	}

	if (wybor == 1) {

		auto start = std::chrono::steady_clock::now();
		a.babelkowe();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		
		cout << "\n---------Sortowanie Babelkowe--------------\n Czas: " << elapsed_second.count() << "s\n";

	}
	
	return main();

}