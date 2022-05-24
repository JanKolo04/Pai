#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main() {
	chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

	int l=0, p=15, sr=(l+p)/2;
	int szukana;
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

	cout << "Którą liczbe chcesz znaleść: ";
	cin >> szukana;

	while(l<=p) {
		if(tab[sr] == szukana) {
			cout << "Liczba " << szukana << " znajduje się na pozycji: " << sr << endl;
			chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

			elapsed_seconds += end - start;	// obliczenie czasu
			cout << "\nCzas: ";
			// wyswietlenie czasu w roznych jednostkach
			cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count()<< " milliseconds\n";
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

	chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

	elapsed_seconds += end - start;	// obliczenie czasu
	cout << "\nCzas: ";
	// wyswietlenie czasu w roznych jednostkach
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count()<< " milliseconds\n";
}