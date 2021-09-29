#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Wpisz liczbe: ";
	cin >> x;
	cout << "Twoja liczba to: " << x << endl;

	return 0;
}


//kalkulator na sume z CIN
int kalkulator() {
	int x,y;
	int sum;

	cout << "Wpisz pierwszą liczbe: ";
	cin >> x;

	cout << "Wpisz drugą liczba: ";
	cin >> y;

	sum = x+y;
	cout << "Suma tych liczb: " << sum << endl;

	return 0;
}