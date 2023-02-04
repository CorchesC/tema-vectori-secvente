#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
void secventaMaxPara(int v[], int dim) {
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			int j = i;
			while (j + 1 < dim && v[j + 1] % 2 == 0) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i, dmax = j;

			}

		}
	}
	cout << smax << " " << dmax << endl;

}