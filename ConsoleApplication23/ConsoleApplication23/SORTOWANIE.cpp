#include "SORTOWANIE.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

void SORTOWANIE::losowanie() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 1000);
	}
	for (int i = 0; i < 100; i++) {
		cout << setw(4) << vec[i];
	}
}
void SORTOWANIE::babelkowe() {
	int a = 0;

	for (int i = 0; i < 100; i++) {

		for (int j = 0; j < 100; j++) {

			if (j != 99) {

				if (vec[j] > vec[j + 1]) {
					a = vec[j];
					vec[j] = vec[j + 1];
					vec[j + 1] = a;
				}
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		cout << setw(4) << vec[i];
	}
}


void SORTOWANIE::wstawieniowe() {

	int N = 100;
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

	for (i = 0; i < N; i++) cout << setw(4) << vec[i];
	cout << endl;

}
