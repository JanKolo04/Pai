#include <iostream>
using namespace std;

void szyfrowanie(int klucz, char tab[]);
void deszyfrowanie(int klucz, char tab[]);

int main() {
	int klucz;
	char tab[1000];

	cout << "Podaj wyraz składający się z małych liter: ";
	cin >> tab;

	cout << "Podaj klucz z przedziału [-26..26]: ";
	cin >> klucz;

	szyfrowanie(klucz, tab);

	deszyfrowanie(-klucz, tab);
}


void szyfrowanie(int klucz, char tab[]) {
	int dl;

	dl = strlen(tab);


	if(!(klucz >= -26) && !(klucz <= 26)) {
		return;
	}

 	if(klucz >= 0) {
		for(int i=0; i<dl; ++i) {
			if(tab[i]+klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i]+klucz - 26;
			}
		}
	}
	else {
		for(int i=0; i<dl; ++i) {
			if(tab[i]+klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i]+klucz + 26;
			}
		}	
	}

	cout << "Szyfrowanie: ";
	for(int i=0; i<dl; ++i) {
		cout << tab[i];
	}
	cout << endl;

}


void deszyfrowanie(int klucz, char tab[]) {
	int dl;

	dl = strlen(tab);


	if(!(klucz >= -26) && !(klucz <= 26)) {
		return;
	}

 	if(klucz >= 0) {
		for(int i=0; i<dl; ++i) {
			if(tab[i]+klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i]+klucz - 26;
			}
		}
	}
	else {
		for(int i=0; i<dl; ++i) {
			if(tab[i]+klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i]+klucz + 26;
			}
		}	
	}

	cout << "Deszyforwanie: ";
	for(int i=0; i<dl; ++i) {
		cout << tab[i];
	}
	cout << endl;

}

