#include <iostream>
using namespace std;

int main() {
	int l=0, p=15, sr=(l+p)/2;
	int szukana;
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

	cout << "Którą liczbe chcesz znaleść: ";
	cin >> szukana;

	while(l<=p) {
		if(tab[sr] == szukana) {
			cout << "Liczba " << szukana << " znajduje się na pozycji: " << sr << endl;
			return 0;
		}
		else if(tab[sr] > szukana) {
			p=sr-1;
		}
		else {
			l=sr+1;
		}
		sr = (l+p)/2;
	}
	cout << "Nie znaleziono liczby" << endl;
}