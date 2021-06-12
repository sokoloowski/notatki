<details>
<summary>Spis treści</summary>

- [Część I - prawdopodobieństwo klasyczne](#część-i---prawdopodobieństwo-klasyczne)
  - [Aksjomatyczna definicja prawdopodobieństwa](#aksjomatyczna-definicja-prawdopodobieństwa)
  - [Co, gdy zdarzenia nie są równie prawdopodobne](#co-gdy-zdarzenia-nie-są-równie-prawdopodobne)
  - [Podstawowe własności prawdopodobieństwa](#podstawowe-własności-prawdopodobieństwa)
  - [Klasyczna definicja prawdopodobieństwa](#klasyczna-definicja-prawdopodobieństwa)
    - [Przeliczalny zbiór zdarzeń elementarnych](#przeliczalny-zbiór-zdarzeń-elementarnych)
    - [Paradoks Bertranda](#paradoks-bertranda)
    - [Subaddytywność prawdopodobieństwa](#subaddytywność-prawdopodobieństwa)
    - [Wzór włączeń i wyłączeń](#wzór-włączeń-i-wyłączeń)
    - [Twierdzenie o ciągłości](#twierdzenie-o-ciągłości)
  - [Prawdopodobieństwo warunkowe](#prawdopodobieństwo-warunkowe)
    - [Wzór łańcuchowy](#wzór-łańcuchowy)
  - [Prawdopodobieństwo całkowite](#prawdopodobieństwo-całkowite)
    - [Rozbicie przestrzeni](#rozbicie-przestrzeni)
    - [Wzór Bayesa](#wzór-bayesa)
  - [Niezależność zdarzeń](#niezależność-zdarzeń)
    - [Niezależność wielu zdarzeń](#niezależność-wielu-zdarzeń)
    - [Własności](#własności)
  - [Schemat Bernoulliego](#schemat-bernoulliego)
    - [Twierdzenie](#twierdzenie)
  - [Lemat Borela-Cantelliego](#lemat-borela-cantelliego)
    - [Twierdzenie](#twierdzenie-1)
- [Część II - Zmienna losowa](#część-ii---zmienna-losowa)
  - [Zmienna losowa](#zmienna-losowa)
  - [Rozkład prawdopodobieństwa](#rozkład-prawdopodobieństwa)
  - [Rozkłady dyskretne](#rozkłady-dyskretne)
    - [Rozkład rzutu kością](#rozkład-rzutu-kością)
  - [Rozkład Bernoulliego](#rozkład-bernoulliego)
  - [Rozkład geometryczny](#rozkład-geometryczny)
  - [Rozkłady ciągłe](#rozkłady-ciągłe)
    - [Stwierdzenie 1](#stwierdzenie-1)
    - [Stwierdzenie 2](#stwierdzenie-2)
    - [Rozkład jednostajny](#rozkład-jednostajny)
  - [Rozkład wykładniczy](#rozkład-wykładniczy)
  - [Dystrybuanta](#dystrybuanta)
    - [Własności](#własności-1)
    - [Twierdzenie](#twierdzenie-2)
  - [Działania na rozkładzie zmiennej losowej](#działania-na-rozkładzie-zmiennej-losowej)
  - [Wartość oczekiwana](#wartość-oczekiwana)
    - [Przypadek dyskretny](#przypadek-dyskretny)
    - [Przypadek ciągły](#przypadek-ciągły)
  - [Wartość oczekiwana dla funkcji od zmiennej losowej](#wartość-oczekiwana-dla-funkcji-od-zmiennej-losowej)
    - [Przypadek dyskretny](#przypadek-dyskretny-1)
  - [Własności wartości oczekiwanej](#własności-wartości-oczekiwanej)
    - [Twierdzenie](#twierdzenie-3)
    - [Stwierdzenie](#stwierdzenie)
  - [Wariancja](#wariancja)
    - [Twierdzenie](#twierdzenie-4)
  - [Momenty](#momenty)
  - [Kowariancja](#kowariancja)
  - [Współczynnik korelacji](#współczynnik-korelacji)
    - [Twierdzenie](#twierdzenie-5)
  - [Rozkłady](#rozkłady)
    - [Rozkłady brzegowe](#rozkłady-brzegowe)
  - [Typy rozkładów wektora losowego](#typy-rozkładów-wektora-losowego)
    - [Rozkład dyskretny](#rozkład-dyskretny)
    - [Rozkład ciągły](#rozkład-ciągły)
  - [Dystrybuanta wektora losowego](#dystrybuanta-wektora-losowego)
  - [Wartość oczekiwana wektora losowego](#wartość-oczekiwana-wektora-losowego)
  - [Niezależność zmiennych losowych](#niezależność-zmiennych-losowych)
    - [Niezależność rozkładów dyskretnych](#niezależność-rozkładów-dyskretnych)
    - [Niezależność rozkładów ciągłych](#niezależność-rozkładów-ciągłych)
  - [Niezależność funkcji od niezależnych zmiennych losowych](#niezależność-funkcji-od-niezależnych-zmiennych-losowych)
  - [Wartość oczekiwana iloczynu zmiennych losowych](#wartość-oczekiwana-iloczynu-zmiennych-losowych)
  - [Wariancja sumy niezależnych zmiennych losowych](#wariancja-sumy-niezależnych-zmiennych-losowych)
  - [Sploty](#sploty)
    - [Splot zmiennych dyskretnych](#splot-zmiennych-dyskretnych)
    - [Splot zmiennych ciągłych](#splot-zmiennych-ciągłych)
  - [Nieskończone ciągi zmiennych niezależnych](#nieskończone-ciągi-zmiennych-niezależnych)
  - [Rozkład warunkowy](#rozkład-warunkowy)
    - [Rozkład warunkowy dla zmiennej dyskretnej](#rozkład-warunkowy-dla-zmiennej-dyskretnej)
    - [Rozkład warunkowy dla zmiennej ciągłej](#rozkład-warunkowy-dla-zmiennej-ciągłej)
  - [Warunkowa wartość oczekiwana](#warunkowa-wartość-oczekiwana)
    - [Wartość oczekiwana rozkładu warunkowego](#wartość-oczekiwana-rozkładu-warunkowego)
    - [Twierdzenie](#twierdzenie-6)
    - [Warunkowa wartość oczekiwana zmiennej losowej](#warunkowa-wartość-oczekiwana-zmiennej-losowej)
- [Część III - statystyka](#część-iii---statystyka)
  - [Nierówność Czebyszewa](#nierówność-czebyszewa)
    - [Nierówność Markowa](#nierówność-markowa)
    - [Nierówność Czebyszewa-Bienaymé](#nierówność-czebyszewa-bienaymé)
    - [Wykładnicza nierówność Czebyszewa](#wykładnicza-nierówność-czebyszewa)
  - [Prawa Wielkich Liczb](#prawa-wielkich-liczb)
    - [Prawo Wielkich Liczb Bernoulliego](#prawo-wielkich-liczb-bernoulliego)
    - [Słabe Prawo Wielkich Liczb (SPWL)](#słabe-prawo-wielkich-liczb-spwl)
    - [Mocne Prawo Wielkich Liczb Bernoulliego](#mocne-prawo-wielkich-liczb-bernoulliego)
    - [Twierdzenie Kołmogorowa](#twierdzenie-kołmogorowa)
    - [Mocne Prawo Wielkich Liczb (MPWL) Kołmogorowa](#mocne-prawo-wielkich-liczb-mpwl-kołmogorowa)
  - [Twierdzenia Poissona](#twierdzenia-poissona)
    - [Twierdzenie Poissona](#twierdzenie-poissona)
    - [Twierdzenie](#twierdzenie-7)
  - [Rozkład Gaussa](#rozkład-gaussa)
  - [Centralne Twierdzenie Graniczne (CTG)](#centralne-twierdzenie-graniczne-ctg)
    - [Wersja najprostrza](#wersja-najprostrza)
    - [Twierdzenie de Moivre'a-Laplace'a](#twierdzenie-de-moivrea-laplacea)
    - [Twierdzenie Berry-Esséen](#twierdzenie-berry-esséen)
  - [Populacja i próba](#populacja-i-próba)
  - [Średnia i częstość](#średnia-i-częstość)
  - [Estymatory](#estymatory)

</details>

---

# Część I - prawdopodobieństwo klasyczne

## Aksjomatyczna definicja prawdopodobieństwa

Prawdopodobieństwem nazywamy funkcję $P$ o wartościach rzeczywistych, określoną na $\sigma$-ciele zdarzeń $\mathcal{F}\subset2^\Omega$, spełniającą warunki:

1. $P(A)\ge0$ dla każdego $A\in\mathcal{F}$
2. $P(\Omega)=1$
3. Jeżeli $A_i\in\mathcal{F}$ dla $i\in\N$ oraz $A_i\ne A_j$, gdy $i\ne j$, to
$$
P(\bigcup_{i=0}^{\infin}A_i)=\sum_{i=0}^{\infin}P(A_i)
$$

Trójkę $(\Omega,\ \mathcal{F},\ P)$ nazywamy przestrzenią probabilistyczną

## Co, gdy zdarzenia nie są równie prawdopodobne

Niech $\Omega=\{\omega_1,\dots,\omega_n\}$, $\mathcal{F}=2^\Omega$ i ponadto niech będą dane nieujemne liczby $p_1,\dots,p_n$ takie, że $p_1+\dots+p_n=1$. Dla każdego zbioru $A=\{\omega_{i_1},\dots,\omega_{i_k}\}$ definiujemy
$$
P(A)=\sum_{j=1}^{k}p_{i_j}
$$

Wtedy $(\Omega,\ \mathcal{F},\ P)$ jest przestrzenią probabilistyczną

## Podstawowe własności prawdopodobieństwa

Jeżeli $(\Omega,\ \mathcal{F},\ P)$ jest przestrzenią probabilistyczną i $A,\ B,\ a_1,\dots,A_n\in\mathcal{F}$, to:

1. $P(\empty)=0$
2. Jeżeli $A_1,\dots,A_n$ wykluczają się parami ($A_i\ne A_j$, gdy $i\ne j$) to
$$
P(\bigcup_{i=1}^{n}A_i)=\sum_{i=0}^{n}P(A_i)
$$
3. $P(A')=1-P(A)$
4. Jeżeli $A\subset B$, to $P(B\backslash A)=P(B)-P(A)$
5. Jeżeli $A\subset B$, to $P(A)\le P(B)$
6. Dla dowolnego $A$ zachodzi $P(A)\le1$
7. $P(A\cup B)=P(A)+P(B)-P(A\cap B)$

## Klasyczna definicja prawdopodobieństwa

Przyjmijmy, że zbiór zdarzeń elementarnych $\Omega$ jest skończony, a same zdarzenia elementarne jednakowo prawdopodobne. Wówczas prawdopodobieństwo zdarzenia $A\subset\Omega$ wynosi
$$
P(A)=\frac{\#A}{\#\Omega}
$$
Powyższy wzór nazywany jest klasyczną definicją prawdopodobieństwa

### Przeliczalny zbiór zdarzeń elementarnych

Załóżmy, że $\Omega=\{\omega_1,\ \omega_2,\dots\}$ i $\{\omega_i\}\in\mathcal{F}$ dla dowolnego $i\in\N$, oraz że $p$ jest prawdopodobieństwem. Wówczas każdy zbiór $A=\{\omega_{i_1},\ \omega_{i_2},\dots\}\subset\Omega$ jest zdarzeniem, a ponadto
$$
P(A)=\sum_{k\ge1}p_{i_k}
$$
gdzie $p_i=P(\{\omega_i\})$

**Uwaga:** Na zbiorze przeliczalnym i nieskończonym prawdopodobieństwo nie moze być rozłożone równo!

### Paradoks Bertranda

Na okręgu o promieniu $r=1$ skonstruowano losowo cięciwę $AB$. Jaka jest szansa, że będzie ona dłuższa niż bok trójkąta równobocznego wpisanego w okrąg?

### Subaddytywność prawdopodobieństwa

Niech $(\Omega,\ \mathcal{F},\ P)$ będzie przestrzenią probabilistyczną, oraz niech $\{A_i\}_{i=1}^n\subset\mathcal{F}$ dla pewnego $n\in\N$. Wówczas
$$
P(\bigcup_{k=1}^{n}A_k)\le\sum_{k=1}^{n}P(A_k)
$$

### Wzór włączeń i wyłączeń

Niech $(\Omega,\ \mathcal{F},\ P)$ będzie przestrzenią probabilistyczną. Dla dowolnego $\{A_i\}_{i=1}^{n}\subset\mathcal{F}$ zachodzi
$$
P(A_1\cup\dots\cup A_n)=\sum_{1\le i\le n}P(A_i)-\sum_{1\le i_1<i_2\le n}P(A_{i_1}\cap A_{i_2})+\dots+(-1)^{n+1}\cdot P(A_1\cap\dots\cap A_n)
$$

### Twierdzenie o ciągłości

Niech $(\Omega,\ \mathcal{F},\ P)$ będzie przestrzenią probabilistyczną.

1. Jeżeli $\{A_n\}_{n=1}^{\infin}\subset\mathcal{F}$, oraz dla dowolnego $n\in\N,\ A_n\subset A_{n+1}$ (nazywamy $A_n$ wstępującą rodziną zdarzeń) i $\bigcup_{n=1}^{\infin}A_n=A$, to
$$
P(A)=\lim_{n\rightarrow\infin}P(A_n)
$$
2. Jeżeli $\{A_n\}_{n=1}^{\infin}\subset\mathcal{F}$, oraz dla dowolnego $n\in\N,\ A_{n+1}\subset A_n$ (nazywamy $A_n$ zstępującą rodziną zdarzeń) i $\bigcup_{n=1}^{\infin}A_n=A$, to
$$
P(A)=\lim_{n\rightarrow\infin}P(A_n)
$$

## Prawdopodobieństwo warunkowe

Prawdopodobieństwem warunkowym zajścia zdarzenia $A$ pod warunkiem zajścia zdarzenia $B$, gdzie $P(B)>0$, nazywamy liczbę
$$
P(A|B)=\frac{P(A\cap B)}{P(B)}
$$

**Uwaga:** Pisząc $P(A|B)$ zawsze milcząco zakładamy, że $P(B)>0$

### Wzór łańcuchowy

Jeżeli zdarzenia $A_1,\ A_2,\dots,A_n$ spełniają warunek $P(A_1\cap\dots\cap A_n)>0$ to
$$
P(A_1\cap\dots\cap A_n)=P(A_1)\cdot P(A_2|A_1)\dots P(A_n|A_1\cap\dots\cap A_{n-1})
$$

## Prawdopodobieństwo całkowite

Jeżeli $\{H_1,\ H_2,\dots,H_n\}$ jest rozbiciem $\Omega$ na zdarzenia o dodatnim prawdopodobieństwie, to dla dowolnego zdarzenia $A$
$$
P(A)=\sum_{i=1}^{n}P(A|H_i)\cdot P(H_i)
$$

### Rozbicie przestrzeni

Rozbiciem przestrzeni $\Omega$ nazywamy rodzinę zdarzeń $\{H_i\}_{i\in I}$, które parami wykluczają się, ich suma zaś jest równa $\Omega$

### Wzór Bayesa

Jeżeli $\{H_i\}_{i\in I}$ jest przeliczalnym rozbiciem $\Omega$ na zdarzenia o dodatnim prawdopodobieństwie oraz $P(A)>0$, to dla dowolnego $j\in I$ mamy
$$
P(H_j|A)=\frac{P(A|H_j)\cdot P(H_j)}{\sum_{i\in I}P(A|H_i)\cdot P(H_i)}
$$

## Niezależność zdarzeń

Zdarzenia $A$ i $B$ nazywamy niezależnymi, gdy
$$
P(A\cap B)=P(A)\cdot P(B)
$$

Alternatywnie: zdarzenie $B$ nie zależy od zdarzenia $A$, gdy
$$
P(B|A)=P(B)
$$

### Niezależność wielu zdarzeń

Zdarzenia $A_1,\dots,A_n$ nazywamy niezależnymi, gdy
$$
P(A_{i_1}\cap\dots\cap A_{i_k})=P(A_{i_1})\cdot\ \dots\ \cdot P(A_{i_k})
$$
dla wszystkich ciągów wskaźników ($i_1,\dots,i_k$), gdzie $1\le i_1<\dots<i_k\le n$, $k=2,\ 3,\dots,\ n$

### Własności

1. Jeśli zdarzenia $A_1$ i $A_2$ są niezależne, to $A_1$ i $A'_2$, $A'_1$ i $A_2$, oraz $A'_1$ i $A'_2$ są parami zdarzeń niezależnych
2. Jeśli $A_1,\dots,A_n$ są niezależne, to niezależne są także $B_1,\dots,B_n$, gdzie $B_i=A_i$ lub $B_i=A'_i$, $i=1,\dots,n$
3. Następujące warunki są równoważne:
   - Zdarzenia $A_1,\dots,A_n$ są niezależne
   - Dla każdego ciągu $B_1,\dots,B_n$, gdzie $B_i=A_i$ lub $B_i=A'_i$, $i=1,\dots,n$, zdarzenia $B_i$ są niezależne
   - Dla każdego ciągu $B_1,\dots,B_n$, gdzie $B_i=A_i$ lub $B_i=A'_i$, $i=1,\dots,n$ zachodzi równość
   $$
    P(B_{i_1}\cap\dots\cap B_{i_k})=P(B_{i_1})\cdot\ \dots\ \cdot P(B_{i_k})
   $$
4. Gdy $A_1,\dots,A_n$ są niezależne, to
$$
P(\bigcup_{i=1}^{n}A_i)=1-P(\bigcap_{i=1}^{n}A'_i)=1-\prod_{i=1}^{n}(1-P(A_i))
$$

## Schemat Bernoulliego

Schematem Bernoulliego będziemy nazywać skończony ciąg niezależnych powtórzeń tego samego doświadczenia o dwóch możliwych wynikach, nazywanych umownie sukcesem i porażką. Poszczególne doświadczenia będziemy nazywać próbami Bernoulliego.

### Twierdzenie

Prawdopodobieństwo pojawienia się dokładnie $k$ sukcesów w schemacie Bernoulliego $n$ prób, z prawdopodobieństwem sukcesu w pojedyńczej próbie równym $p$ wynosi
$$
{n\choose k}\cdot p^k\cdot (1-p)^{n-k}
$$

## Lemat Borela-Cantelliego

Dla dowolnego ciągu zdarzeń ($A_n$), definiujemy zbiór zdarzeń, które zachodzą nieskończenie często jako:
$$
\{A_n\text{ n.c.}\} = \bigcap\limits^{\infin}_{m=1}\bigcap\limits^{\infin}_{n=m}A_n
$$

### Twierdzenie

1. Jeśli $\sum^{\infin}_{n=1}P(A)\lt{\infin}$, to $P(\{A_n\text{ n.c.}\})$
2. Jeśli zdarzenia $A_1,\ A_2,\ \dots$ są niezależne i $\sum^\infin_{n=1}P(A_n)=\infin$, to
$$
P(\{A_n\text{ n.c.}\})=1
$$

# Część II - Zmienna losowa

## Zmienna losowa

Funkcję $X:\Omega\rightarrow\R$ nazywamy zmienną losową o wartościach w $\R$, jeśli dla każdego $a\in\R$ zbiór $X^{-1}([-\infin,\ a])$ jest zdarzeniem, czyli $X^{-1}([-\infin,\ a])\in\mathcal{F}$

## Rozkład prawdopodobieństwa

Rozkładem prawdopodobieństwa zmiennej losowej $X$ nazywamy prawdopodobieństwo $\mu_X$, określone na zbiorach borelowskich $\R$ zależnością
$$
\mu_X(B) = P(X^{-1}(B)),\ B\in\mathcal{B}(R)
$$

**Uwaga:** Zmienne losowe równe z prawdopodobieństwem 1 są nierozróżnialne z punktu widzenia teorii.

## Rozkłady dyskretne

Zmienna losowa $X$ ma rozkład dyskretny, jeśli istnieje taki zbiór przeliczalny $\mathcal{S}\R$, że $\mu_X(\mathcal{S}) = 1$.

### Rozkład rzutu kością

Niech $X$ będzie wynikiem rzutu symetryczną kostką. Wtedy
$$
\mu_X(\{i\})=P(X=i)=\frac{1}{6}\text{, gdy }i=1,2,\dots,6
$$

## Rozkład Bernoulliego

Niech $X$ oznacza liczbę sukcesów w schemacjie Bernoulliego $n$ z prawdopodobieństwem sukcesu $p$ w pojedynczym doświadczeniu. Prawdopodobieństwo uzyskania dokładnie $K$ sukcesów wynosi
$$
p_k=P(X=k)={n \choose k}p^k(1-p)^{n-k}
$$

Mówimy, że zmienna losowa ma rozkład Bernoulliego.

## Rozkład geometryczny

Wykonujemy co sekundę doświadczenia Bernoulliego, aż do chwili otrzymania sukcesu. Niech $X$ oznacza liczbę wykonanych doświadczeń, $Y$ - mierzony w sekundach czas. Wyznaczamy rozkłady tych zmiennych

## Rozkłady ciągłe

Zmienna losowa $Y$ ma rozkład ciągły, gdy istnieje taka funkcja $f:\R\rightarrow\R$, że
$$
\mu_Y(A)=\int_Af(x)\mathrm{d}x, a\in\mathcal{B}(\R^n)
$$

Funkcję $f$ nazywamy gęstością rozkładu $\mu_Y$.

### Stwierdzenie 1

Jeśli zmienna losowa X ma rozkład ciągły o gęstości $f$ i (z prawdopodobieństwem 1) $X\in(a,\ b)$, funkcja $\psi:(a,\ b)\rightarrow\R$ jest klasy $\mathcal{C}^1$ oraz $\psi'(x)\ne0$ dla $x\in(a,\ b)$, to zmienna losowa $Y=\psi(X)$ ma rozkład ciągły o gęstości
$$
g(y)=f(h(y))|h'(y)|1_{\psi(l)}(y)
$$
gdzie $h(s)=\psi^{-1}(s)$, $l=(a,\ b)$.

### Stwierdzenie 2

Jeśli zmienna losowa $X$ ma rozkład ciągły o gęstości $f_X$, to zmienna losowa $Y=aX+b$, gdzie $a\ne0$, ma rozkład ciągły o gęstości
$$
f_Y(u)=f_X(\frac{u-b}{a})\frac{1}{|a|}
$$

### Rozkład jednostajny

Gdy gęstość jest stała w przedziale $[a,\ b]$, a dokładniej
$$
f(x)=\begin{cases}
  \frac{1}{b-a},\ x\in[a,\ b]\\
  0,\ x\notin[a,\ b]
\end{cases}
$$

## Rozkład wykładniczy

Powiemy, że zmienna losowa $X$ ma rozkład wykładniczy z parametrem $\lambda\gt 0$, gdy gęstość ma postać
$$
f(x)=\lambda e^{-\lambda x}1_{(0,\ \infin)}(x)
$$

## Dystrybuanta

Dystrybuantą zmiennej losowej $X:\Omega\rightarrow\R$ nazywamy funkcję $F_X:\R\rightarrow\R$, określoną zależnością
$$
F_X(t)=P(X\le t)
$$

### Własności

Dystrybuanta $D_X$ zmiennej losowej $X$ ma następujące własności:

1. $F_X$ jest niemalejąca
2. $\lim_{t\rightarrow\infin}F_X(t)=1$; $\lim_{t\rightarrow-\infin}F_X(t)=0$
3. $F_X$ jest prawostronnie ciągła

### Twierdzenie

Jeżeli funkcja $F:\R\rightarrow\R$ spełnia podane wcześniej własności dystrybuanty, to jest dystrybuantą pewnej zmiennej losowej; jej rozkład jest wyznaczony jednoznacznie.

Jeśli dystrybuanta $F_X$ jest ciągła w punkcie $t$, to $P(X=t)=0$, a gdy $F_X$ ma skok o wielkości $d$, to $P(X=t)=d>0$.

## Działania na rozkładzie zmiennej losowej

1. Niech $P(X=2)=P(X=-2)=\frac{1}{6}$, $P(X=0)=\frac{2}{3}$. Wyznaczyć rozkład zmiennej losowej $Y=X^2$.
2. Niech $X$ ma rozkład wykładniczy z parametrem 1. Znaleźć rozkład $Y=e^{-X}$.
3. Zmienna losowa $X$ ma rozkład jednostajny na $[0,\ 3]$. Znaleźć rozkłady zmiennych losowych $Y=\min(X,X^2)$ i $Z=\max(2, X)$. Czy są to rozkłady ciągłe?

## Wartość oczekiwana

### Przypadek dyskretny

Niech $X$ ma rozkład $\{(x_i,\ p_i):i\in I\}$. Mówimy, że wartość oczekiwana zmiennej losowej $X$ istnieje, gdy $\sum_{i\in I}|x_i|p_i\lt\infin$. Wtedy wartością oczekiwaną zmiennej losowej nazywamy liczbę
$$
\mathcal{E}X=\sum_{i\in I}x_i p_i\lt\infin
$$
W przeciwnym razie powiemy, że zmienna losowa nie ma wartości oczekiwanej.

### Przypadek ciągły

Załóżmy, że zmienna losowa $X$ ma rozkład ciągły z gęstością $f$. Mówimy, że istnieje wartość oczekiwana, gdy
$$
\int_{-\infin}^{\infin}|x|f(x)\mathrm{d}x\lt\infin
$$

Wartością oczekiwaną nazwiemy wtedy liczbę
$$
\mathcal{E}X=\int_{-\infin}^{\infin}xf(x)\mathrm{d}x
$$

## Wartość oczekiwana dla funkcji od zmiennej losowej

Niech $\varphi:\R\rightarrow\R$ będzie dowolną funkcją.

### Przypadek dyskretny

Jeśli zmienna losowa $X$ ma rozkład dyskretny $\{(x_i,\ p_i):i\in I\}$, to wartość oczekiwana $\varphi(X)$ istnieje wtedy i tylko wtedy, gdy zbieżny jest szereg $\sum_{i\in I}|\varphi(x_i)|p_i$. Wtedy
$$
\mathcal{E}\varphi(X) = \sum_{i\in I}\varphi(x_i)p_i
$$

## Własności wartości oczekiwanej
### Twierdzenie

Załóżmy, że istnieją wartości oczekiwane $\mathcal{E}X$ i $\mathcal{E}Y$. Wtedy

1. jeśli $X\ge0$, to $\mathcal{E}X\ge0$
2. jeśli $X\le Y$, to $\mathcal{E}X\le\mathcal{E}Y$
3. $|\mathcal{E}X|\le\mathcal{E}|X|$
4. dla $a,\ b\in\R$ istnieje wartość oczekiwana zmiennej $aX+bY$ i
$$
\mathcal{E}(aX+bY)=a\mathcal{E}X+b\mathcal{E}Y
$$
5. jeśli $X=1_A$, to $\mathcal{E}X=P(A)$

### Stwierdzenie

1. Jeżeli $X$ jest zmienną losową przyjmującą wartości całkowite nieujemne, to $\mathcal{E}X=\sum_{n=1}^{\infin}P(X\ge n)$.
2. Jeśli $X\ge0$, to
$$
\mathcal{E}X=\int_0^\infin(1-F_X(t))\mathrm{d}t\int_0^\infin P(X>t)\mathrm{d}t
$$
przy czym istnienie jednego z tych wyrażeń implikuje istnienie pozostałych i ich równość.

## Wariancja

Załóżmy, że $\mathcal{E}X=m$. Jeśli $\mathcal{E}((X-m)^2)<\infin$, to tę liczbę nazwiemy wariancją zmiennej losowej $X$ o wartościach rzeczywistych i oznaczamy
$$
\mathcal{D}^2X=\mathcal{E}((X-m)^2)\\[0.5em]
\mathcal{D}^2X=\mathcal{E}X^2-(\mathcal{E}X)^2
$$

### Twierdzenie

Jeśli $X$ jest zmienną losową, dla której $\mathcal{E}X^2<\infin$, to istnieje $\mathcal{D}^2X$ oraz:

1. $\mathcal{D}^2X\ge0$; $\mathcal{D}^2X=0$ wtedy i tylko wtedy, gdy $P(X=c)=1$ dla pewnej stałej $c$

## Momenty

Momentem absolutnym rzędy $r>0$ nazywamy liczbę $\mathcal{E}|X|^r$, a momentem zwykłym liczbę $\mathcal{E}(X^r)$. Ostatnie wyrażenie ma zawsze sens dla liczb naturalnych. Liczbę $\mathcal{E}(X-\mathcal{E}X)^r$ nazywamy momentem centralnym.

## Kowariancja

Kowariancją całkowalnych zmiennych losowych $X$ i $Y$, spełniających warunek $\mathcal{E}|XY|<\infin$, nazywamy wielkość
$$
\text{cov}(X,\ Y)=\mathcal{E}((X-\mathcal{E}X)(Y-\mathcal{E}Y))\\[0.5em]
\text{cov}(X,\ Y)=\mathcal{E}(XY)-\mathcal{E}X\mathcal{E}Y
$$

## Współczynnik korelacji

Współczynnik korelacji definiujemy jako
$$
\rho(X,\ Y)=\frac{\text{cov}(X,\ Y)}{\sqrt{(\mathcal{D}^2X)(\mathcal{D}^2Y)}},\ \mathcal{D}^2X,\ \mathcal{D}^2Y>0
$$

### Twierdzenie

Jeżeli zmienne losowe $X_1,\dots,X_n$ mają wariancję, to istnieje wariancja ich sumy i
$$
\mathcal{D}^2(X_1+\dots+X_n)=\sum_{i=1}^{n}\mathcal{D}^2X_i+2\sum_{1\le i>j\le n}\text{cov}(X_i,\ X_j)
$$

## Rozkłady

Rozkładem prawdopodonieństwa zmiennej losowej $X$ o wartościach w $\R^n$ nazywamy rozkład prawdopodobieństwa $\mu_X$, określony na $\mathcal{B}(\R^n)$ zależnością
$$
\mu_X(B)=P(X^{-1}(B)),\ B\in\mathcal{B}(\R^n)
$$

### Rozkłady brzegowe

$P(X_j\in B)=P(X_1\in\R,\dots,X_{j-1}\in\R,X_j\in\R,X_{j+1}\in\R,\dots,X_n\in\R)$

## Typy rozkładów wektora losowego

### Rozkład dyskretny

Wektor losowy $(X,\ Y)$ nazywamy dyskretnym, jeśli istnieje zbiór przeliczalny $S\subset\R^2$, dla którego $\mu_X(S)=1$

### Rozkład ciągły

Mówimy, że wektor losowy $(X,\ Y)$ ma rozkład ciągły, gdy istnieje gęstość, czyli funkcja $f:\R^2\rightarrow\R$ taka, że
$$
P((X,\ Y)\in A)=\iint_A f(x,\ y)\mathrm{d}x\mathrm{d}y,\ A\in\mathcal{B}(\R^2)
$$

## Dystrybuanta wektora losowego

Dystrybuantą wektora losowego $(X,\ Y)$ o wartościach $\R^2$ nazywamy funkcję $F_{(X,\ Y)}:\R^2\rightarrow\R$ określoną zależnością
$$
F_{(X,\ Y)}(t,\ s)=P(X\le t,\ Y\le s)=\mu_X((-\infin,\ t]\times(-\infin,\ s])
$$

## Wartość oczekiwana wektora losowego

Wartością oczekiwaną wektora losowego $X=(X_1,\dots,X_n)$ o wartościach w $\R^n$ nazywamy wektor $\mathcal{E}X=(\mathcal{E}X_1,\dots,\mathcal{E}X_n)$, o ile wszystkie współrzędne mają wartość oczekiwaną.

## Niezależność zmiennych losowych

Zmienne losowe $X_1,\dots,X_n$ o wartościach w $\R$, określone na $(\Omega,\ \mathcal{F},\ P)$ nazywamy niezależnymi, gdy dla każdego ciągu zbiorów borelowskich $B_1,\dots,B_n$ zachodzi równość
$$
P(X_1\in B_1,\ X_2\in B_2,\dots,\ X_n\in B_n)=P(X_1\in B_1)\cdot\ \dots\ \cdot P(X_n\in B_n)
$$

### Niezależność rozkładów dyskretnych

Zmienne losowe $X_1,\dots,X_n$ o rozkładach dyskretnych są niezależne wtedy i tylko wtedy, gdy dla każdego ciągu $x_1,\ x_2,\dots,\ x_n$, gdzie $P(X_i=x_i)>0$, $i=1,\dots,n$
$$
P(X_1=x_1,\dots,X_n=x_n)=P(X_1=x_1)\cdot\ \dots\ \cdot P(X_n=x_n)
$$

### Niezależność rozkładów ciągłych

Jeśli $X_1,\dots,X_n$ są zmiennymi losowymi o rozkładach ciągłych z gęstościami odpowiednio $g_1,\dots,g_n$, to zmienne te są niezależne wtedy i tylko wtedy, gdy $\mu_{(X_1,\dots,X_n)}$ jest rozkładem ciągłym z gęstością
$$
g(x_1,\dots,x_n)=g_1(x_1)\cdot\ \dots\ \cdot g_n(x_n)
$$

## Niezależność funkcji od niezależnych zmiennych losowych

Załóżmy, że zmienne losowe
$$
X_{1,1},\ X_{1,2},\dots,X_{1,k_1},\ X_{2,1},\dots,X_{2,k_2},\dots,X_{n,1},\dots,X_{n,k_n}
$$
są niezależne. Niech $\varphi_j:\R^{k_j}\rightarrow\R$ będą takimi funkcjami, że $Y_j=\varphi_j(X_{j,1},\dots,X_{j,k_j})$, $j=1,\ 2,\dots,\ n$ są zmiennymi losowymi. Wówczas zmienne losowe $Y_1,\dots,Y_n$ są niezależne

## Wartość oczekiwana iloczynu zmiennych losowych

Jeśli $X_1,\dots,X_n$ są niezależnymi zmiennymi losowymi, które mają wartość oczekiwaną, to istnieje wartość oczekiwana iloczynu $X_1\cdot\ \dots\ \cdot X_n$ i
$$
\mathcal{E}(X_1\cdot\ \dots\ \cdot X_n)=\mathcal{E}X_1\cdot\ \dots\ \cdot \mathcal{E}X_n
$$

## Wariancja sumy niezależnych zmiennych losowych

Jeżeli $X_1,\dots,X_n$ są niezależnymi zmiennymi losowymi, mającymi wariancję, to istnieje wariancja sumy i
$$
\mathcal{D}^2(\sum_{i=1}^n X_i)=\sum_{i=1}^n \mathcal{D}^2X_i
$$

## Sploty

### Splot zmiennych dyskretnych

Splotem rozkładów zmiennych losowych nazywamy rozkład sumy zmiennych losowych niezależnych. Jeżeli $X$ i $Y$ są zmiennymi losowymi o rozkładach dyskretnych, to splot tych dwóch zmiennych wyraża się wzorem
$$
P(X+Y=s)=\sum_{s_1,s_2:s_1+s_2=s}P(X=s_1,\ Y=s_2)=\sum_{s_1,s_2:s_1+s_2=s}P(X=s_1)(Y=s_2)
$$

### Splot zmiennych ciągłych

Rozkład sumy niezależnych zmiennych losowych o rozkładach ciągłych jest zmienną losową o rozkładzie ciągłym z gęstością będącą splotem gęstości
$$
(g_1\cdot g_2)(z)=\int_{-\infin}^{\infin}g_1(z-y)g_2(y)\mathrm{d}y
$$

## Nieskończone ciągi zmiennych niezależnych

Zmienne losowe $(X_\alpha)_{\alpha\in\Lambda}$ określone na tej samej przestrzeni probabilistycznej nazywamy niezależnymi, gdy dla każdego skończonego ciągu indeksów $i_1,\dots,i_n\in\Lambda$, $n\in\N$, zmienne losowe $X_{i_1},\dots,X_{i_n}$ są niezależne.

## Rozkład warunkowy

### Rozkład warunkowy dla zmiennej dyskretnej

Dla wektora $(X,\ Y)$ o rozkładzie dyskretnym i $P(Y=y)>0$ możemy wyznaczyć prawdopodobieństwo warunkowe
$$
P(X\in A|Y=y)=\frac{P(X\in A,\ Y=y)}{P(Y=y)}=\frac{\sum_{i:x_i\in A}P(X=x_i, Y=y)}{P(Y=y)}
$$

### Rozkład warunkowy dla zmiennej ciągłej

Gęstością rozkładu warunkowego $X$ pod warunkiem $Y=y$ nazywamy funkcję określoną dla $x\in\R$ wzorem
$$
f_{X|Y}(x|y)=\begin{cases}
  \frac{f(x,\ y)}{f_Y(y)}\text{, o ile }f_Y(y)>0\\[0.5em]
  g(x)\text{, w pozostałych przypadkach}
\end{cases}
$$
gdzie $F_Y(y)=\int_{-\infin}^{\infin}f(x,\ y)\mathrm{d}x$ jest gęstością rozkładu brzegowego $Y$, a $g$ dowolną ustaloną gęstością

## Warunkowa wartość oczekiwana

### Wartość oczekiwana rozkładu warunkowego

Dla danego rozkładu warunkowego zmiennej $Y$ można wyznaczyć wartość oczekiwaną takiego rozkładu. Nazywamy ją warunkową wartością oczekiwaną $Y$ i oznaczamy $\mathcal{E}(Y|X=x)$. Gdy rozkład jest dyskretny, to
$$
\mathcal{E}(Y|X=x)=\sum_jy_jP(Y=y_j|X=x)
$$
a gdy jest ciągły, to
$$
\mathcal{E}(Y|X=x)=\int_{-\infin}^{\infin}yf_{Y|X}(y|x)\mathrm{d}y
$$

### Twierdzenie

Gdy istnieje $\mathcal{E}Y$, to istnieje $\mathcal{E}(Y|X=x)$

### Warunkowa wartość oczekiwana zmiennej losowej

Warunkową wartość oczekiwaną zmiennej losowej $Y$ pod warunkiem zmiennej losowej $X$, którą będziemy oznaczać $\mathcal{E}(Y|X)$, definiujemy wzorem
$$
\mathcal{E}(Y|X)=m(X)
$$
gdzie $m(x)=\mathcal{E}(Y|X=x)$.

# Część III - statystyka

## Nierówność Czebyszewa

Niech $X$ będzie nieujemną zmienną losową. Wtedy dla dowolnego $\epsilon>0$
$$
P(X\ge\epsilon)\le\frac{\mathcal{E}X}{\epsilon}
$$

### Nierówność Markowa

Niech $p>0$. Wtedy dla dowolnego $\epsilon>0$
$$
P(|X|\ge\epsilon)\le\frac{\mathcal{E}|X|^p}{\epsilon^p}
$$

### Nierówność Czebyszewa-Bienaymé

Dla dowolnego $\epsilon>0$
$$
P(|X-\mathcal{E}X|\ge\epsilon)\le\frac{\mathcal{D}^2X}{\epsilon^2}
$$

### Wykładnicza nierówność Czebyszewa

Jeśli $\mathcal{E}e^{pX}<\infin$ dla pewnego $p>0$, to dla $\lambda\in[0,\ p]$
$$
P(X\ge\epsilon)\le\frac{\mathcal{E}|X|^p}{\epsilon^p}
$$
dla dowolnego $\epsilon$

## Prawa Wielkich Liczb

### Prawo Wielkich Liczb Bernoulliego

Jeśli $S_n$ jest liczbą sukcesów w schemacie Bernoulliego $n$ prób z prawdopodobieństwem sukcesu w pojedynczej próbie równym $p$, to dla każdego $\epsilon>0$
$$
\lim_{n\rightarrow\infin}P(|\frac{S_n}{n}-p|\le\epsilon)=1
$$

### Słabe Prawo Wielkich Liczb (SPWL)

Niech $(X_n)_n$ będzie ciągiem zmiennych losowych takich, że:

1. $\lim_{n\rightarrow\infin}\frac{\mathcal{D}^2S_n}{n^2}=0$
2. $X_n$ są parami nieskorelowane i mają wspólnie ograniczone wariancje

Niech $S_n=X_1+\dots+X_n$, gdzie $n=1,\ 2,\dots$ Wtedy $(X_n)_n$ spełnia SPWL, czyli dla każdego $\epsilon>0$
$$
\lim_{n\rightarrow\infin}P(|\frac{S_n-\mathcal{E}S_n}{n}| >\epsilon)=0
$$

### Mocne Prawo Wielkich Liczb Bernoulliego

Oznaczmy przez $S_n$ liczbę sukcesów w schemacie Bernoulliego $n$ prób z prawdopodobieństwem sukcesu w pojedynczej próbie równym $p$. Wtedy dla każdego $\epsilon>0$
$$
\lim_{n\rightarrow\infin}P(\sup_{k\ge n}|\frac{S_k}{k}-p|\le\epsilon)=1
$$

### Twierdzenie Kołmogorowa

Jeśli $(X_n)_{n=1}^\infin$ jest ciągiem niezależnych zmiennych losowych takich, że $\mathcal{D}^2X_n<\infin$, gdzie $n=1,\ 2,\dots$, przy czym
$$
\sum_{n=1}^{\infin}\frac{\mathcal{D}^2X_n}{n^2}<0
$$
to z prawdopodobieństwem 1
$$
\lim_{n\rightarrow\infin}\frac{S_n-\mathcal{E}S_n}{n}=0
$$

### Mocne Prawo Wielkich Liczb (MPWL) Kołmogorowa

Jeżeli $(X_n)_{n=1}^\infin$ jest ciągiem niezależnych zmiennych o jednakowym rozkładzie, $\mathcal{E}|X_1|<\infin$, $(X_n)_n$ spełnia MPWL, czyli
$$
\lim_{n\rightarrow\infin}\frac{S_n}{n}=\mathcal{E}X_1
$$
z prawdopodobieństwem 1

## Twierdzenia Poissona

### Twierdzenie Poissona

Jeśli $n\rightarrow\infin$, $p_n\rightarrow0$ i $np_n\rightarrow\lambda>0$, to
$$
{n\choose{k}}P_n^k(1-p_n)^n-k\xrightarrow[{n\rightarrow\infin}]{}\frac{\lambda^k}{k!}e^{-\lambda}
$$

### Twierdzenie

Niech zmienna losowa $S_n$ ma rozkład Bernoulliego z parametrami $n$, $p$ i niech $\lambda=np$. Wtedy dla każdego zbioru $B\subset\{0,1,2,\dots\}$ mamy
$$
|P(S_n\in B)-\sum_{k\in B}\frac{\lambda^k}{k!}e^{-\lambda}|\le\frac{\lambda^2}{n}
$$

## Rozkład Gaussa

$\mathcal{N}(0,\ 1)$ ma gęstość
$$
\varphi(x)=\frac{1}{\sqrt{2\pi}}e^{\frac{x^2}{2}}
$$

Jeśli zmienna losowa $X$ ma rozkład $\mathcal{N}(0,\ 1)$, to zmienna losowa $\sigma X+m$, gdzie $\sigma>0$ ma rozkład $\mathcal{N}(m,\ \sigma^2)$ o gęstości $\varphi_{m,\sigma}(x)=\frac{1}{\sigma\sqrt{2\pi}}e^{\frac{-(x-m)^2}{2\sigma^2}}$

## Centralne Twierdzenie Graniczne (CTG)

### Wersja najprostrza

Niech $X,\ X_1,\ X_2,\dots$ będą niezależnymi zmiennymi losowymi o tym samym rozkładzie, niech $\mathcal{E}X=m$ i $\mathcal{D}^2X=\sigma>0$. Wtedy dla każdego $t$
$$
P(\frac{X_1+\dots+X_n-nm}{\sigma\sqrt{n}})\xrightarrow[{n\rightarrow\infin}]{}\Phi(t)
$$

### Twierdzenie de Moivre'a-Laplace'a

Niech $-\infin\le a\le b\le\infin$, $h=\frac{1}{\sqrt{npq}}$. Wtedy
$$
P(a\le\frac{S_n-np}{\sqrt{npq}}\le b)-(\Phi(b+\frac{1}{2}h)-\Phi(a-\frac{1}{2}h))\xrightarrow[{n\rightarrow\infin}]{}0
$$

### Twierdzenie Berry-Esséen

Jeśli $(X_n)$ jest ciągiem niezależnych zmiennych losowych o tym samym rozkładzie i $\mathcal{E}|X_1|^3<\infin$, $S_n\X_1+\dots+X_n$, $n=1,\ 2,\dots$, to
$$
\sup_{t\in\R}|P(\frac{S_n-\mathcal{E}S_n}{\sqrt{\mathcal{D}^2S_n}})-\Phi(t)|\le C\frac{\mathcal{E}|X_1-\mathcal{E}X_1|^3}{\sigma^3\sqrt{n}}
$$
gdzie $\sigma=\sqrt{\mathcal{D}^2X_1}$, $\frac{1}{\sqrt{2\pi}}\le C<\frac{4}{5}$

## Populacja i próba

Pojedynczą wartość parametru nazywamy cechą statystyczną. Cechy mogą być ilościowe lub jakościowe.

Statystyczną populacją (lub w skrócie populacją) nazywamy zbiór wszystkich możliwych cech pewnego wybranego parametru.

Obiekt którego cechę badamy nazywamy jednostką statystyczną.

Prostą próbą losową o liczności $n$ nazywamy ciąg niezależnych zmiennych losowych $X_1,\dots,X_n$ określonych na populacji i takich, że każda z nich ma ten sam rozkład.

Statystyką nazywamy funkcję przypisującą wartości rzeczywiste dla próby losowej.

## Średnia i częstość

Średnią w prostej próbie losowej $X_1,\dots,X_n$ o liczności $n$ nazywamy statystykę
$$
\overline{X}=\frac{X_1+\dots+X_n}{n}
$$

Częstością występowania w prostej próbie losowej nazywamy statystykę
$$
\hat{p}=\frac{\sum_{i=1}^{n}X_i}{n}
$$
gdzie $X_1,\dots,X_n$ jest prostą próbą losową z rozkładu dwupunktowego o wartościach $0$ i $1$.

## Estymatory

Statystykę $T(X_1,\dots,X_n)$ służącą do oszacowania nieznanego parametru populacji nazywamy estymatorem. Dla konkretnych wartości próby $T(x_1,\dots,x_n)$ nazywamy wartością estymatora.