# Szyfr Cezara

## Opis
Szyfr CEzara jest to szyfr przesuwający. Polega to na przesunięciu danej litery o klucz. Klucz jest to wartość którą podajemy o ile chcemy przesunąć litery.

## Przykład

```terminal
Podaj wyraz do zmiany: marcin
Podaj klucz: 2

Output: kypagl
```
Aby zdeszyfrować przekazujemy <strong>-klucz</strong>

<strong>-(-2)=0</strong>

---
## Potrzebne biblioteki

```c++
//primary library
#include <iostream>
//namespace
using namespace std;
```

## Funkcja szyfrująca i deszyfrująca

### Szyfrowanie
`Krok 1:` Deklaracja zmiennych `int klucz;` `char tab[1000];` `int dl;`

`Krok 2:` Podajemy wyraz który chcemy zaszyfrować z małych liter `cin >> tab;`

`Krok 3:` Podajemy klucz `cin >> klucz;`

`Krok 4:` Badamy długość tablicy w zmiennej <strong>dl</strong>

`Krok 5:` Pierwsza instrukcja warunkowa <strong>if</strong> sprawdza czy `!(klucz >= 26) && !(klucz <= 26)`

`Krok 6:` Kolejna instrukcja warunkowa <strong>if</strong> sprawdza czy `klucz >= 0` jeśli tak to:
* `Klucz 6a` Pętla <strong>for</strong> przechodzi po każdym elemencie z tablicy <strong>tab</strong> `for(int i=0; i<dl; ++i)`
* `Klucz 6b` Instrukcja warunkowa if w pętli sprawdza czy `tab[i]+klucz <= 'z'` jeśli tak to `tab[i] += klucz`
* `Klucz 6c` Jeśli nie sprawdzi się poprzednia instrukcja to `tab[i] = tab[i]+klucz - 26`

`Krok 7:` Jeśli nie to:
* `Klucz 7a` Pętla <strong>for</strong> przechodzi po każdym elemencie z tablicy <strong>tab</strong> `for(int i=0; i<dl; ++i)`
* `Klucz 7b` Instrukcja warunkowa if w pętli sprawdza czy `tab[i]+klucz >= 'a'` jeśli tak to `tab[i] += klucz`
* `Klucz 7c` Jeśli nie sprawdzi się poprzednia instrukcja to `tab[i] = tab[i]+klucz + 26`

`Krok 8:` Wypisujesz tablice <strong>tab</strong>

---


### Deszyfrowanie
Szyfrowanie się różni od szyforwania tym, że przekazujemy <strong>-klucz</strong>

`Krok 1:` Deklaracja zmiennych `int klucz;` `char tab[1000];` `int dl;`

`Krok 2:` Podajemy wyraz który chcemy zaszyfrować z małych liter `cin >> tab;`

`Krok 3:` Podajemy klucz `cin >> klucz;`

`Krok 4:` Badamy długość tablicy w zmiennej <strong>dl</strong>

`Krok 5:` Pierwsza instrukcja warunkowa <strong>if</strong> sprawdza czy `!(klucz >= 26) && !(klucz <= 26)`

`Krok 6:` Kolejna instrukcja warunkowa <strong>if</strong> sprawdza czy `klucz >= 0` jeśli tak to:
* `Klucz 6a` Pętla <strong>for</strong> przechodzi po każdym elemencie z tablicy <strong>tab</strong> `for(int i=0; i<dl; ++i)`
* `Klucz 6b` Instrukcja warunkowa if w pętli sprawdza czy `tab[i]+klucz <= 'z'` jeśli tak to `tab[i] += klucz`
* `Klucz 6c` Jeśli nie sprawdzi się poprzednia instrukcja to `tab[i] = tab[i]+klucz - 26`

`Krok 7:` Jeśli nie to:
* `Klucz 7a` Pętla <strong>for</strong> przechodzi po każdym elemencie z tablicy <strong>tab</strong> `for(int i=0; i<dl; ++i)`
* `Klucz 7b` Instrukcja warunkowa if w pętli sprawdza czy `tab[i]+klucz >= 'a'` jeśli tak to `tab[i] += klucz`
* `Klucz 7c` Jeśli nie sprawdzi się poprzednia instrukcja to `tab[i] = tab[i]+klucz + 26`

`Krok 8:` Wypisujesz tablice <strong>tab</strong>















