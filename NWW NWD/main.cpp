#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int nwd();
int nww();

int main() {
	chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start
	nww();

	chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

	elapsed_seconds += end - start;	// obliczenie czasu
	cout << "Czas: " << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count()<< "ms\n";
}

int nwd() {
	int a,b;

	cout << "Podaj a: ";
	cin >> a;

	cout << "Podaj b: ";
	cin >> b;


	while(a!=b) {
		if(a<b) {
			b=b-a;
		}
		else {
			a=a-b;
		}
	}
	cout << "NWD: " << a << endl;

	return 0;
}

int nww() {
	int a,b;

	cout << "Podaj a: ";
	cin >> a;

	cout << "Podaj b: ";
	cin >> b;

	int iloczyn = a*b;

	while(a!=b) {
		if(a<b) {
			b=b-a;
		}
		else {
			a=a-b;
		}
	}

	int nww = iloczyn/a;

	cout << "NWW: " << nww << endl;

	return 0;
}


