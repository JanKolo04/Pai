# Wyszukiwanie binarne

## Opis
Jest to algorytm który szuka danego elementu z tablicy posortowanej. Ten algorytm używa metody <strong>dziel i zwyciężaj</strong>.

## Objaśnienie

1 2 5 8 9 11 15 20

Do zrealizowania tego algorytmu będą potrzebne trzy zmienne:

l - przechowuje pierwszy indeks tablicy
r - przehcowuje ostatni indeks tablicy
sr - przechowuje środkowy indeks tablicy przez wykonanie działania (l+p)/2

```c++
int l=0;
int r=7;
int sr=(l+p)/2;
```


## Algorytm

`Krork 1` Pierwszym krokiem będzie zdefiniowanie zmiennych
* `int l=0; int r=7; int sr=(l+p)/2; tab[7]={2, 3, 5, 7, 11, 13, 17}; int szukana`

`Krok 2` Do zmiennej szukana przypisujemy wartość podaną przez użytkownika `cin >> szukana`

`Krok 3` Tworzymy pętle <strong>while</strong> która będzie wykonywała kod dopóki l<=p

* `Krok 3a` W pętli while tworzymy warunek `if(tab[sr] == szuakna)` który jeśli jest true to wtedy kończy działanie programu

* `Krok 3b` Jeśli poprzedni warunek nie jesy true to sprawdza czy `else if(tab[sr] > szukana)` jeśli tak to `p=sr-1;`

* `Krok 3c` Jeśli żaden z poprzednich warunków nie był true to wtedy `l=sr+1;`

* `Krok 3d` Sprawdzeniu wszytskich warunków przypisujemy do zmiennej <strong>sr</strong> nową wartość `sr=(l+p)/2;`

`Krok 4` Jeśli wyjdziemy z pętli to wyświetlamy komunikat `cout << Nie znaleziono liczby << endl;`


