#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main() {
	chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

	int f0 = 0;
	int f1 = 1;
	int n, f;

	cout << "Ile wyrazów ciągu wypisać: ";
	cin >> n;

	for(int i=0; i<=n; ++i) {
		if(i > 1) {
			f = f0+f1;
			f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}

		cout << f << endl;
	}

	chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

	elapsed_seconds += end - start;	// obliczenie czasu
	cout << "\nCzas: ";
	// wyswietlenie czasu w roznych jednostkach
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count()<< "ms\n";

}


