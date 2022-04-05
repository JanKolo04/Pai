# NWW NWD
<strong>NWW</strong> jest to największa wspólna wielokrotność, a <strong>NWD</strong> jest to najwiekszy wspólny dzielnik.

### Needed library
Do odpalenia programu musisz mieć zimportowaną podstwową biblioteke C++ i zarezerwowanie przestrzeni nazw
```c++
//primary library
#include <iostream>
//namespace
using namespace std;
```
---

## NWD

Do obliczenia NWD wykorzystujemy algorytm Euklidesa który jest poniżej

```c++
while(a!=b) {
  if(a<b) {
    b=b-a;
  }
  else {
    a=a-b;
  }
}
```

`Krok 1:` Na wstepie deklarujemy zmienne a i b typu int i pobieramy od użytkownika wartości `cin >> a;`

`Krok 2:` Pętla while wykonuje kod dopuki liczby nie będą te same
* `Krok 2a:` Instrukcja sprawdza czy <strong>a</strong> jest mniejsze od <strong>b</strong> jeśli tak to `b=b-a;`
* `Krok 2b:` Jeśli popbrzednia instrukcja się nie sprawdzi to wykonuje `a=a-b;`

---

## NWW
Do obliczenia NWW wykorzystujemy zmodyfikowany kalgorytm Euklidesa który jest poniżej

```c++
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
```

`Krok 1:` Na wstepie deklarujemy zmienne a i b typu int i pobieramy od użytkownika wartości `cin >> a;`

`Krok 2:` Obliczamy iloczyn pobranych liczb od użytkownika

`Krok 3:` Pętla while wykonuje kod dopuki liczby nie będą te same
* `Krok 3a:` Instrukcja sprawdza czy <strong>a</strong> jest mniejsze od <strong>b</strong> jeśli tak to `b=b-a;`
* `Krok 3b:` Jeśli popbrzednia instrukcja się nie sprawdzi to wykonuje `a=a-b;`

`Krok 4:` Na końcu obliczamy nww czyli dzielimy <strong>iloczyn</strong> przez <strong>a</strong>


