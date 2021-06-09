Spis treści
- [Rachunek Prawdopodobieństwa i Statystyka](#rachunek-prawdopodobieństwa-i-statystyka)
  - [Lemat Borela-Cantelliego](#lemat-borela-cantelliego)
    - [Twierdzenie](#twierdzenie)
  - [Zmienna losowa](#zmienna-losowa)
    - [Przykłady](#przykłady)
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
    - [Przykłady](#przykłady-1)
  - [Dystrybuanta](#dystrybuanta)
    - [Własności](#własności)
    - [Twierdzenie](#twierdzenie-1)
  - [Działania na rozkładzie zmiennej losowej](#działania-na-rozkładzie-zmiennej-losowej)
  - [Wartość oczekiwana](#wartość-oczekiwana)
    - [Przypadek dyskretny](#przypadek-dyskretny)
    - [Przypadek ciągły](#przypadek-ciągły)
  - [Wartość oczekiwana dla funkcji od zmiennej losowej](#wartość-oczekiwana-dla-funkcji-od-zmiennej-losowej)
    - [Przypadek dyskretny](#przypadek-dyskretny-1)
  - [Własności wartości oczekiwanej](#własności-wartości-oczekiwanej)
    - [Twierdzenie](#twierdzenie-2)
    - [Stwierdzenie](#stwierdzenie)
  - [Wariancja](#wariancja)
    - [Twierdzenie](#twierdzenie-3)
  - [Momenty](#momenty)
  - [Kowariancja](#kowariancja)
  - [Współczynnik korelacji](#współczynnik-korelacji)
    - [Twierdzenie](#twierdzenie-4)
  - [Rozkłady](#rozkłady)
    - [Rozkłady brzegowe](#rozkłady-brzegowe)
  - [Typy rozkładów wektora losowego](#typy-rozkładów-wektora-losowego)
    - [Rozkład dyskretny](#rozkład-dyskretny)
    - [Rozkład ciągły](#rozkład-ciągły)
  - [Dystrybuanta wektora losowego](#dystrybuanta-wektora-losowego)
  - [Wartość oczekiwana wektora losowego](#wartość-oczekiwana-wektora-losowego)

# Rachunek Prawdopodobieństwa i Statystyka

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

## Zmienna losowa

Funkcję $X:\Omega\rightarrow\R$ nazywamy zmienną losową o wartościach w $\R$, jeśli dla każdego $a\in\R$ zbiór $X^{-1}([-\infin,\ a])$ jest zdarzeniem, czyli $X^{-1}([-\infin,\ a])\in\mathcal{F}$

### Przykłady

1. Rzucamy monetą $\Omega = \{O,\ R\}$. Jeśli $X$ (odpowiednio $Y$) jest liczbą wyrzuconych orłów (odpowiednio reszek), to $X(O) = 1$, $X(R) = 0$, $Y(O) = 0$, $Y(R) = 1$.
2. Niech $X$ (odpowiednio $Y$) będzie odległością punktu, wybranego losowo z przedziału $[a,\ b]$ od jego środka (odpowiednio prawego końca). Wtedy
$$
X(\omega) = |\omega-\frac{a+b}{2}|,\ Y(\omega)=b-\omega
$$

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

### Przykłady

1. Dla jakiego $a$ funkcja $f(x)=(ax-1)1_{0,1}(x)$ jest gęstością rozkładu zmiennej losowej?
2. Obliczyć $P(|X-1|\lt2)$, gdy $X$ ma rozkład wykładniczy z parametrem 1.

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

Niech $\phi:\R\rightarrow\R$ będzie dowolną funkcją.

### Przypadek dyskretny

Jeśli zmienna losowa $X$ ma rozkład dyskretny $\{(x_i,\ p_i):i\in I\}$, to wartość oczekiwana $\phi(X)$ istnieje wtedy i tylko wtedy, gdy zbieżny jest szereg $\sum_{i\in I}|\phi(x_i)|p_i$. Wtedy
$$
\mathcal{E}\phi(X) = \sum_{i\in I}\phi(x_i)p_i
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
