# Ciąg Fibbonacciego

## Opis
Jest to ciąg liczb naturalnych określony rekurencyjnie. W sposób podany poniżej

<img width="286" alt="Zrzut ekranu 2022-04-26 o 14 33 26" src="https://user-images.githubusercontent.com/76879087/165300755-58f6899b-ab9d-40c6-9003-d619462ab1e9.png">

To jest kilka przykładowych liczb z ciągu Fibonacciego
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584...
```

## Algorytm w postaci interacyjnej
`Zmienne`
* int f0=0;
* int f1=1;
* int n,f;

`Krok 1` Do zmiennej `n` przypisujemy pobraną wartość od użytkownika z zapytaniem ile chce liczb z ciągi Fibonnaciego
`Krok 2` Kolejnym krokiem będzie utworzenie pętli `for(iny i=0; i<=n; ++i)` która będzie sprawdząła warunki
`Krok 3` Tworzymy instrukcje `if(i > 1)` w celu sprawdzenia czy i jest więszke od 1, więc jest true to
* `Krok 3a` `f=f0+f1`
* `Krok 3b` `f0=f1` 
* `Krok 3c` `f1=f`
`Krok 4` Jeśli poprzedni warunek nie jest true to
* `Krok 4a` `f=i`
`Krok 5` Ostatnim krokiem będzie wypisanie `f` i robimy to poza `else`

### Cały algorytm w pętli for
```c++
for(int i=0; i<=n; ++i) {
  if(i > 1) {
    f = f0+f1;
    f0 = f1;
    f1 = f;
  }
  else {
    f = i;
  }

  cout << f << endl;
}
```
