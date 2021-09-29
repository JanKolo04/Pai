#include <iostream>
using namespace std;

//endl nowa linia

int main() {
	int myNum;
	myNum = 15;
	cout << myNum << endl;
	return 0;
}



//typy zmiennych 
int zmienne() {
	int myNum = 15; //liczba całkowita
	double myFloatNum = 5.99; //float o podówjnej precycji
	char myChar = 's'; //znak
	string myText = "Hello"; //text
	bool myBool = true; //true or false

	return 0;

}


//wyswietlanie zmiennych z tekstem
int print() {
	int liczba = 15;
	cout << "Twoja liczba to: " << liczba;

	return 0;
}


//dodawanie zmiennych 
int suma() {
	int x = 5;
	int y = 10;
	int sum = x+y;

	cout << sum << endl;

	return 0;
}


//zmienne stałe 
int stale() {
	//jesli dodamy coast to zmienna stanie sie stało
	//i nie bedzie mozna ja nadpisywać
	const int myNum = 15;
	const float other = 12.11;

	return 0;
}