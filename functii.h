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
	int stg = 1;
	int dr = 0;
	int stmp= 0;
	int suma = 0;
	int stgF = 0;
	int drF = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			int j = i;
			while (j + 1 < dim && v[j + 1] % 2 == 0) {
				j++;
			}
			if (j - i + 1 > dr - stg + 1) {
				suma = 0;
				stg = i;
				dr = j;
				for (int f = stg; f < dr; f++) {
					suma += v[f];
				}
			}
			if (j - i + 1 == dr - stg + 1)  {
				cout << suma << endl;
				cout << stmp << endl;
				if (suma > stmp) {
					stgF = i;
					drF = j;
					
				}
			}
			stmp = suma;
		}
	}
	cout << stgF << " " << drF << endl;
}