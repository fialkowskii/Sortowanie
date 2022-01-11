#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

class SORTOWANIE
{
public:
	int w;
	void sort();
	void babelkowe();
	void sortowanie_wstawienie();
	void sortowanie_wybor();
	void quickSort(int left, int right);
	void pokaz();
};

