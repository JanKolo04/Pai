# Liczby pierwsze
Co to liczba pierwsza, jest to taka liczba która ma dwa dzielniki, siebie i jeden

### Needed library
Do odpalenia programu musisz mieć zimportowaną podstwową biblioteke C++ i zaimportowanie przestrzeni nazw
```c++
//primary library
#include <iostream>
//namespace
using namespace std;
```

### Part of the code

W poniższym kodzie jest pokazane jak algorytm wyszukuje liczby

`Krok 1:` Pętla while przechodzi po każdej bedzie przechodziła po każdej liczbie dopóki nie pokaże ilości liczb którą podaliśmy liczb

`Krok 2:` Pętla for sprawdza czy dana liczba jest podzielna prze jakąś liczbe
* `Krok 2a:` Jeśli liczba jest podzielna przez którąś z liczb to zmienna test == false, a jeśli nie to pozostaje true
* `Krok 2b:` Gdy zmienna test jest false to zmienna liczba jest zwiększana o jeden i sprawdza czy kolejna liczba jest liczba pierwszą

`Krok 3:` If sprawdza czy zmienna test jest rowna true jesli tak to pokazuje liczbe i zwiększa counter o jeden

```c++
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
```

### Run code
```terminal
Run code: g++ main.cpp

Ile chcesz wypisać liczb pierwszych: 3
Output: 2 3 5
```
