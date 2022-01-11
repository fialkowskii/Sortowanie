#include "SORTOWANIE.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

vector<int> vec;


void SORTOWANIE::sort() {
	cout << "Ile liczb chcesz wylosowac?: ";
	cin >> w;
	cout << "Wylosowane liczby od 0 do " << w << ": \n";
	cout << "\n\n";
	srand(time(NULL));
	for (int i = 0; i < w; i++) {
		vec.push_back(rand() % w);
		cout << vec[i] << " ";
	}

}

void SORTOWANIE::babelkowe() {
	int buffer = 0;


	for (int i = 0; i < w - 1; i++) {

		for (int j = 0; j < w - 1; j++) {

			

				if (vec[j] > vec[j + 1]) {

					swap(vec[j], vec[j + 1]);
				}
		}
		
	}
	for (int i = 0; i < w - 1; i++) {
		cout << setw(4) << vec[i];
	}
}


void SORTOWANIE::sortowanie_wstawienie() {

	int N = w;
	int x, i, j;
	for (j = N - 2; j >= 0; j--)
	{
		x = vec[j];
		i = j + 1;
		while ((i < N) && (x > vec[i]))
		{
			vec[i - 1] = vec[i];
			i++;
		}
		vec[i - 1] = x;
	}

	cout << "Po sortowaniu:\n\n";
	for (i = 0; i < N; i++) cout << setw(4) << vec[i];
	cout << endl;

}

void SORTOWANIE::quickSort(int left, int right) {
	int i = (left + right) / 2;
	int piwot = vec[i];
	vec[i] = vec[right];
	int j = left;
	for (int i = left; i < right; i++)
	{
		if (vec[i] < piwot)
		{
			std::swap(vec[i], vec[j]);
			j++;
		}
	}
	vec[right] = vec[j];
	vec[j] = piwot;

	if (left < j - 1) {
		quickSort(left, j - 1);
	}
	if (j + 1 < right) {
		quickSort(j + 1, right);
	}
}

void SORTOWANIE::sortowanie_wybor()
{
	int index_minimalnej;
	for (int i = 0; i < vec.size(); i++) {
		index_minimalnej = i;
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[j] < vec[index_minimalnej]) {
				index_minimalnej = j;
			}
		}
		swap(vec[i], vec[index_minimalnej]);
	}

}

void SORTOWANIE::pokaz() {
	for (int i = 0; i < 1000; i++) {
		cout << vec[i] << "   ";
	}
}


