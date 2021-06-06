## Złożoność algorytmów sortujących

n - liczba elementów do posortowania,
k - liczba różnych elementów

| Nazwa algorytmu  |                  Złożoność                   |
| :--------------: | :------------------------------------------: |
|    bąbelkowe     |                    O(n²)                     |
|    kubełkowe     |    O(n²), wymaga O(k) dodatkowej pamięci     |
| przez zliczanie  | O(n + k), wymaga O(n + k) dodatkowej pamięci |
| przez kopcowanie |                  O(n log n)                  |
| przez wstawianie |                    O(n²)                     |
|  przez scalanie  |  O(n log n), wymaga O(n) dodatkowej pamięci  |
|     szybkie      |       Θ(n log n), pesymistyczny O(n²)        |
| przez wybieranie |                    O(n²)                     |

## Porównanie złożoności obliczeniowych

![Graf złożoności obliczeniowych](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Comparison_computational_complexity.svg/1024px-Comparison_computational_complexity.svg.png)

## Działanie algorytmów sortujących w praktyce

### Dla n = 100 000 000 i wartości losowych:

|                     Algorytm | Czas wykonywania       |
| ---------------------------: | :--------------------- |
|                    quicksort | 11.11s                 |
|       mergesort (iteracyjny) | 11.81s                 |
|                    kubełkowe | 5.14s (32768 kubełków) |
| kubełkowe (tablica struktur) | 0.68s (32768 kubełków) |
|                     heapsort | 55.69s                 |

### Dla n = 100 000 000 i wartości posortowanych:

|                     Algorytm | Czas wykonywania       |
| ---------------------------: | :--------------------- |
|                    quicksort | brak odpowiedzi - błąd |
|       mergesort (iteracyjny) | 5.06s                  |
|                    kubełkowe | 3.96s (32768 kubełków) |
| kubełkowe (tablica struktur) | 0.41s                  |
|                     heapsort | 23.92s                 |

Dla quicksort juz dla 100 tys. brak odpowiedzi - błąd!