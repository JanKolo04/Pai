#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;


int main() {

	system("clear");

	int ile_liczb;

	cout << "Ile chcesz liczb: ";
	cin >> ile_liczb;

	int counter = 0;
	int liczba = 2;
	bool test = true;

	auto start = high_resolution_clock::now();
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
	auto stop = high_resolution_clock::now();
	
	auto duration = duration_cast<microseconds>(stop - start);
	 
	// To get the value of duration use the count()
	// member function on the duration object
	cout << "Do time: " << duration.count() << " microseconds" << endl;


	return 0;
}