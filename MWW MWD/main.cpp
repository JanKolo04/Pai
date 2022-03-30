#include <iostream>
using namespace std;

int nwd();
int nww();

int main() {
	nww();
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
	cout << a << endl;

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

	cout << nww << endl;

	return 0;
}