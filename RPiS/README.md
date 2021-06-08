- [Rachunek Prawdopodobieństwa i Statystyka](#rachunek-prawdopodobieństwa-i-statystyka)
  - [Lemat Borela-Cantelliego](#lemat-borela-cantelliego)
    - [Definicja](#definicja)
    - [Twierdzenie](#twierdzenie)
  - [Zmienna losowa](#zmienna-losowa)
    - [Definicja](#definicja-1)
    - [Przykłady](#przykłady)
  - [Rozkład prawdopodobieństwa](#rozkład-prawdopodobieństwa)

# Rachunek Prawdopodobieństwa i Statystyka

## Lemat Borela-Cantelliego

### Definicja

Dla dowolnego ciągu zdarzeń ($A_n$), definiujemy zbiór zdarzeń, które zachodzą nieskończenie często jako:

$$\{A_n\text{ n.c.}\} = \bigcap\limits^{\infin}_{m=1}\bigcap\limits^{\infin}_{n=m}A_n$$

### Twierdzenie

1. Jeśli $\sum^{\infin}_{n=1}P(A)\lt{\infin}$, to $P(\{A_n\text{ n.c.}\})$
2. Jeśli zdarzenia $A_1,\ A_2,\ \dots$ są niezależne i $\sum^\infin_{n=1}P(A_n)=\infin$, to
$$P(\{A_n\text{ n.c.}\})=1$$

## Zmienna losowa

### Definicja

Funkcję $X:\Omega\rightarrow\R$ nazywamy zmienną losową o wartościach w $\R$, jeśli dla każdego $a\in\R$ zbiór $X^{-1}([-\infin,\ a])$ jest zdarzeniem, czyli $X^{-1}([-\infin,\ a])\in\mathcal{F}$

### Przykłady

1. Rzucamy monetą $\Omega = \{O,\ R\}$. Jeśli $X$ (odpowiednio $Y$) jest liczbą wyrzuconych orłów (odpowiednio reszek), to $X(O) = 1$, $X(R) = 0$, $Y(O) = 0$, $Y(R) = 1$.
2. Niech $X$ (odpowiednio $Y$) będzie odległością punktu, wybranego losowo z przedziału $[a,\ b]$ od jego środka (odpowiednio prawego końca). Wtedy
$$X(\omega) = |\omega-\frac{a+b}{2}|,\ Y(\omega)=b-\omega$$

## Rozkład prawdopodobieństwa

Rozkładem prawdopodobieństwa zmiennej losowej $X$ nazywamy prawdopodobieństwo $\mu{x}$, określone na zbiorach borelowskich $\R$ zależnością
$$\mu{x}(B) = P(X^{-1}(B)),\ B\in\mathcal{B}(R)$$

**Uwaga:** Zmienne losowe równe z prawdopodobieństwem 1 są nierozróżnialne z punktu widzenia teorii.