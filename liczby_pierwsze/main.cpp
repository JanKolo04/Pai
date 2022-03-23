#include <iostream>
using namespace std;


int main() {
	int ile_liczb;

	cout << "Ile chcesz liczb: ";
	cin >> ile_liczb;

	int counter = 0;
	int liczba = 2;
	bool test = true;

	while(counter < ile_liczb) {
		for(int i=2; i<liczba; i++) {
			if(liczba%i == 0) {
				test = false;
			}
		}

		if(test) {
			cout << liczba << " ";
			counter++;
		}
		test = true;
		liczba++;
	}
	cout << endl;

	return 0;
}