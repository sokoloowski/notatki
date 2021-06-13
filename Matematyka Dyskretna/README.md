<details>
<summary>Spis treści</summary>

- [Zagadnienia na 3.0](#zagadnienia-na-30)
  - [Definicja grupy](#definicja-grupy)
    - [Przykłady](#przykłady)
  - [Definicja podgrupy](#definicja-podgrupy)
    - [Przykłady](#przykłady-1)
  - [Definicja działania. Działania na $+_n$, $\cdot_n$ oraz ich własności](#definicja-działania-działania-na-_n-cdot_n-oraz-ich-własności)
    - [Dodawanie ($+_n$)](#dodawanie-_n)
    - [Mnożenie ($\cdot_n$)](#mnożenie-cdot_n)
  - [Surjekcja, injekcja oraz bijekcja](#surjekcja-injekcja-oraz-bijekcja)
    - [Surjekcja (funkcja "na")](#surjekcja-funkcja-na)
    - [Injekcja (funkcja "1-1")](#injekcja-funkcja-1-1)
    - [Bijekcja](#bijekcja)
  - [Definicja obrazu i przeciwobrazu funkcji](#definicja-obrazu-i-przeciwobrazu-funkcji)
    - [Obraz](#obraz)
    - [Przeciwobraz](#przeciwobraz)
    - [Przykłady](#przykłady-2)
  - [Relacja równoważności](#relacja-równoważności)
    - [Przykłady](#przykłady-3)
  - [Relacja częściowego porządku](#relacja-częściowego-porządku)
    - [Przykłady](#przykłady-4)
  - [Element najmniejszy/największy, maksymalny/minimalny w częściowym porządku](#element-najmniejszynajwiększy-maksymalnyminimalny-w-częściowym-porządku)
  - [Graf pełny, spójny, cykliczny, planarny, drzewo](#graf-pełny-spójny-cykliczny-planarny-drzewo)
    - [Przykłady](#przykłady-5)
  - [Graf Eulera i graf Hamiltona](#graf-eulera-i-graf-hamiltona)
    - [Graf Eulera](#graf-eulera)
    - [Graf Hamiltona](#graf-hamiltona)
  - [Aksjomaty teorii mnogości](#aksjomaty-teorii-mnogości)
    - [Aksjomat ekstensjonalności](#aksjomat-ekstensjonalności)
    - [Aksjomat zbioru pustego](#aksjomat-zbioru-pustego)
    - [Aksjomat podzbiorów](#aksjomat-podzbiorów)
    - [Aksjomat pary](#aksjomat-pary)
    - [Aksjomat sumy](#aksjomat-sumy)
    - [Aksjomat zbioru potęgowego](#aksjomat-zbioru-potęgowego)
  - [Zasada indukcji matematycznej](#zasada-indukcji-matematycznej)
  - [Zasada abstrakcji, klasy abstrakcji, zbiór ilorazowy](#zasada-abstrakcji-klasy-abstrakcji-zbiór-ilorazowy)
    - [Przykłady](#przykłady-6)
  - [Homomorfizm/izomorfizm, jądro i obraz homomorfizmu](#homomorfizmizomorfizm-jądro-i-obraz-homomorfizmu)
    - [Przykład](#przykład)
  - [Lemat Kuratowskiego-Zorna](#lemat-kuratowskiego-zorna)
- [Zagadnienia na 4.0](#zagadnienia-na-40)
  - [Krata, krata zupełna, algebra Boole’a](#krata-krata-zupełna-algebra-boolea)
    - [Przykłady](#przykłady-7)
  - [Definicja funkcji tworzącej](#definicja-funkcji-tworzącej)
    - [Przykłady](#przykłady-8)
  - [Równania rekurencyjne i metody ich rozwiązywania](#równania-rekurencyjne-i-metody-ich-rozwiązywania)
  - [Opisz grupę $\Phi(5)$: rząd grupy, rzędy elementów, cykliczność](#opisz-grupę-phi5-rząd-grupy-rzędy-elementów-cykliczność)
  - [Grupy permutacji, cykle, transpozycje, grupy symetryczne $S_n$ i alternujące $A_n$](#grupy-permutacji-cykle-transpozycje-grupy-symetryczne-s_n-i-alternujące-a_n)
  - [Lemat Kuratowskiego-Zorna w terminach antyłańcuchów](#lemat-kuratowskiego-zorna-w-terminach-antyłańcuchów)
  - [Definicja liczby Stirlina I rodzaju](#definicja-liczby-stirlina-i-rodzaju)
  - [Pokaż, że w każdej grupie $(a^{-1})^{-1}=a$ oraz $(ab)^{-1}=b^{-1}a^{-1}$](#pokaż-że-w-każdej-grupie-a-1-1a-oraz-ab-1b-1a-1)
    - [$(a^{-1})^{-1}=a$](#a-1-1a)
    - [$(ab)^{-1}=b^{-1}a^{-1}$](#ab-1b-1a-1)
  - [Pokaż homomorficzność grup $\R$ oraz $\R_+$. Wskaż jądro i obraz homomorfizmu](#pokaż-homomorficzność-grup-r-oraz-r_-wskaż-jądro-i-obraz-homomorfizmu)
  - [Zasada włączania-wyłączania](#zasada-włączania-wyłączania)
  - [Definicja liczby Bella. Liczba Bella zbioru pustego, 1-, 2-, 3-elementowego](#definicja-liczby-bella-liczba-bella-zbioru-pustego-1--2--3-elementowego)
  - [Twierdzenie Cantora-Bernsteina](#twierdzenie-cantora-bernsteina)
    - [Przykład](#przykład-1)
  - [Porządek liniowy, dobry porządek, twierdzenie o dobrym uporządkowaniu zbioru](#porządek-liniowy-dobry-porządek-twierdzenie-o-dobrym-uporządkowaniu-zbioru)
  - [Własności obrazów i przeciwobrazów funkcji](#własności-obrazów-i-przeciwobrazów-funkcji)
  - [Twierdzenie Kuratowskiego - kryterium planarności grafu. Kryterium eulerowskości grafu](#twierdzenie-kuratowskiego---kryterium-planarności-grafu-kryterium-eulerowskości-grafu)
    - [Twierdzenie Kuratowskiego](#twierdzenie-kuratowskiego)
    - [Kryterium eulerowskości](#kryterium-eulerowskości)
    - [Przykłady](#przykłady-9)

</details>

---

# Zagadnienia na 3.0

## Definicja grupy

Grupą nazywamy zbiór $G$ w którym określone jest działanie dwuargumentowe $\circ:G\circ G\rightarrow G$ o własnościach:

- działanie jest łączne: $a\circ(b\circ c)=(a\circ b)\circ c$
- działanie posiada element neutralny: $\exist_{e\in G}\forall_{g\in G}e\circ g=g\circ e=g$
- każdy element posiada element odwrotny: $\forall_{g\in G}\exist_{g^{-1}\in G}g\circ g^{-1}=g^{-1}\circ g=e$

### Przykłady

1. Liczby całkowite z działaniem dodawania
2. Permutacje zbioru $n$-elementowego
3. Obroty w $\R^3$ względem ustalonego punktu
4. Przekształcenia symetrii wielokątów foremnych na płaszczyźnie

## Definicja podgrupy

Podgrupą nazywamy dowolny podzbiór $H$ grupy $G$, który sam jest grupą z działaniem z grupy $G$.

### Przykłady

1. Liczby całkowite parzyste tworzą nieskończoną podgrupę grupy liczb całkowitych z działaniem dodawania
2. Obroty na płaszczyźnie o wielokrotność kąta $\frac{\pi}{6}$ tworzą skończoną podgrupę grupy obrotów po płaszczyźnie
3. Multiplikatywne grupy liczbowe $\mathbb{Q}^*<\R^*<\mathbb{C}$

## Definicja działania. Działania na $+_n$, $\cdot_n$ oraz ich własności

Działaniem w zbiorze $K$ nazywamy funkcję $h$ która każdej parze $(a,\ b)$ elementów zbioru $K$ przyporządkowuje pewien element tego samego zbioru:
$$
h:K\circ K\rightarrow K
$$

### Dodawanie ($+_n$)

1. Jest przemienne: $a+b=b+a$
2. Jest łączne: $a+(b+c)=(a+b)+c$
3. Nie jest rozdzielne względem mnożenia: $a+(b\cdot c)\ne (a+b)\cdot(a+c)$

### Mnożenie ($\cdot_n$)

1. Jest przemienne: $a\cdot b=b\cdot a$
2. Jest łączne: $a\cdot(b\cdot c)=(a\cdot b)\cdot c$
3. Jest rozdzielne względem dodawania: $a\cdot(b+c)=(a\cdot b)+(a\cdot c)$

## Surjekcja, injekcja oraz bijekcja

### Surjekcja (funkcja "na")

Funkcja przyjmująca jako swoje wartości wszystkie elementy przeciwdziedziny, tj. której obraz jest równy przeciwdziedzinie.

1. $f:x\rightarrow\frac{1}{x}$ dla $x\ne0$ na $\R\setminus\{0\}$
2. $f:x\rightarrow x^a$ dla $a\in\{2n+1:n\in\N\}$ na $\R$
3. $f:x\rightarrow\ln{x}$ dla $x>0$ na $\R$
4. $f:x\rightarrow\tg{x}$ dla $x\in\bigcup\{(-\frac{\pi}{2}+k\pi,\ \frac{\pi}{2}+k\pi):k\in\Z\}$ na $\R$
5. $f:\R\xrightarrow{\text{na}}\Z,\;f(x)=\lceil x\rceil$
6. $f:\R\xrightarrow{\text{na}}\{1\},\;f(x)=1$

### Injekcja (funkcja "1-1")

Funkcja, której każdy element przeciwdziedziny przyjmowany jest co najwyżej raz.

1. Tożsamość $x\rightarrow x$ na dowolnym zbiorze
2. $f:x\rightarrow\frac{1}{x}$ dla $x\in\R\setminus\{0\}$
3. Dowolna niestała funkcja liniowa $f:\R\rightarrow\R$, $f(x)=ax+b$, gdzie $a\ne0$

### Bijekcja

Funkcja, w której każdemu elementowi dziedziny odpowiada jeden i tylko jeden element przeciwdziedziny; wzajemnie jednoznaczna odpowiedniość między elementami dwóch zbiorów, czyli funkcja będąca jednocześnie injekcją i surjekcją.

1. $f:x\rightarrow x^2$, dla $x\in\R_+$
2. $f:x\rightarrow\frac{1}{x}$, dla $x\in\R\setminus\{0\}$

## Definicja obrazu i przeciwobrazu funkcji

### Obraz

Zbiór wszystkich wartości (należących do przeciwdziedziny) przyjmowanych przez funkcję dla każdego elementu danego podzbioru jej dziedziny.

### Przeciwobraz

Zbiór wszystkich elementów dziedziny, które są odwzorowywane na elementy danego podzbioru przeciwdziedziny.

### Przykłady

1. $f:\{1,2,3\}\rightarrow\{a,b,c,d\}$ określona wzorem
    $$
    f(x)=\begin{cases}
        a\text{ dla }x\in\{1,2\}\\
        c\text{ dla }x=3
    \end{cases}
    $$
    Obrazem zbioru $\{2,3\}$ poprzez $f$ jest $f(\{2,3\})=\{a,c\}$, a obrazem $f$ jest $\{a,c\}$  
    Przeciwobrazem $a$ jest $f^{-1}(a)=\{1,2\}$, przeciwobrazem zbioru $\{a,b\}$ również jest $\{1,2\}$, a przeciwobrazem zbioru $\{b,d\}$ jest zbiór pusty $\emptyset$
2. $f:\R\rightarrow\R$ dana jest wzorem $f(x)=x^2$.  
    Obrazem $\{-2,3\}$ w $f$ jest $f(\{-2,3\})=\{4,9\}$, a obrazem $f$ jest $\R_+$.  
    Przeciwobrazem $\{4,9\}$ w $f$ jest $f^{-1}(\{4,9\})=\{-3,-2,2,3\}$, a przeciwobrazem zbioru $N=\{n\in\R:n<0\}$ w $f$ jest zbiór pusty $\emptyset$, ponieważ liczby ujemne nie mają pierwiastków kwadratowych w zbiorze liczb rzeczywistych

## Relacja równoważności

Relację $\sim$ na zbiorze $A$ będziemy nazywać relacją równoważności, jeśli ma następujące 3 właściwości:

1. Jest zwrotna: $a\sim a$
2. Jest symetryczna: $a\sim b\iff b\sim a$
3. Jest przechodnia: $a\sim b\land b\sim c\Rightarrow a\sim c$

### Przykłady

1. W geometrii relacjami równoważności są między innymi przystawanie i podobieństwo.
2. W zbiorze prostych na płaszczyźnie określona jest relacja równoległości: proste $a$ i $b$ są równoważne, gdy są równoległe.
3. W dowolnym grafie nieskierowanym $(V,\ E)$ zdefiniujmy relację na wierzchołkach: $x\mathcal{R}y$ gdy istnieje ścieżka z $x$ do $y$ (być może jest to ścieżka pusta, jeżeli $x=y$).

## Relacja częściowego porządku

Niech $X$ będzie dowolnym zbiorem. Relację $\mathcal{R}$ określoną w zbiorze $X$ nazywamy relacją częściowego porządku, jeżeli jest zwrotna, antysymetryczna i przechodnia na $X$. Jeżeli $\mathcal{R}$ jest relacją częściowego porządku w zbiorze $X$, to parę $(X,\mathcal{R})$ nazywamy zbiorem częściowo uporządkowanym.

### Przykłady

1. Szczególnym przypadkiem częściowego porządku jest porządek liniowy, w szczególności: naturalny porządek na liczbach rzeczywistych jest porządkiem częściowym.
2. Relacja zawierania zbiorów określona na dowolnej rodzinie podzbiorów ustalonego zbioru
3. Relacja $\preccurlyeq$ określona w zbiorze liczb zespolonych: $\displaystyle a+bi\preccurlyeq c+di\iff a\leqslant c\land b\leqslant d$ jest częściowym porządkiem. Nie jest to jednak porządek liniowy.

## Element najmniejszy/największy, maksymalny/minimalny w częściowym porządku

## Graf pełny, spójny, cykliczny, planarny, drzewo

- Graf pełny - graf prosty, nieskierowany, w którym dla każdej pary węzłów istnieje krawędź je łącząca
- Graf spójny - graf spełniający warunek, że dla każdej pary wierzchołków istnieje ścieżka, która je łączy
- Graf cykliczny
- Graf planarny
- Drzewo

### Przykłady

## Graf Eulera i graf Hamiltona

### Graf Eulera

Rodzaj grafu rozpatrywany w teorii grafów. Graf eulerowski odznacza się tym, że da się w nim skonstruować cykl Eulera, czyli cykl, który przechodzi przez każdą jego krawędź dokładnie raz. W niektórych źródłach graf zawierający tylko ścieżkę Eulera nazywany jest grafem półeulerowskim.

### Graf Hamiltona

Graf rozważany w teorii grafów zawierający ścieżkę przechodzącą przez każdy wierzchołek dokładnie jeden raz zwaną ścieżką Hamiltona. W szczególności grafem hamiltonowskim jest graf zawierający cykl Hamiltona, tj. zamkniętą ścieżkę Hamiltona. W niektórych źródłach graf zawierający tylko ścieżkę Hamiltona nazywany jest grafem półhamiltonowskim.

## Aksjomaty teorii mnogości

### Aksjomat ekstensjonalności

Jeżeli zbiory $a$ i $b$ mają te same elementy, to są identyczne:
$$
{\displaystyle \forall a\;\forall b\;\left(\forall x\;(x\in a\iff x\in b)\Rightarrow a=b\right)}
$$

### Aksjomat zbioru pustego

Istnieje zbiór, który nie ma żadnego elementu:
$$
{\displaystyle \exists x\;\forall y\;\neg (y\in x)}
$$
Na mocy aksjomatu ekstensjonalności istnieje tylko jeden zbiór posiadający taką właściwość: zbiór pusty, oznaczany symbolem $\emptyset$ 

### Aksjomat podzbiorów

Dla każdego zbioru $b$ istnieje zbiór $a$, złożony z tych i tylko tych elementów $x$ zbioru $b$, które mają własność $\varphi$:
$$
{\displaystyle \forall p_{1}\dots \forall p_{n}\;\forall b\;\exists a\;\forall x\;{\bigg (}x\in a\iff {\Big (}x\in b\land \varphi (x,b,p_{1},\dots ,p_{n}){\Big )}{\bigg )}}
$$
Aksjomat podzbiorów daje się wyprowadzić z aksjomatu zbioru pustego i aksjomatu zastępowania.

### Aksjomat pary

Dla dowolnych zbiorów $a$ i $b$ istnieje zbiór $c$, którego elementami są dokładnie zbiory $a$ i $b$:
$$
{\displaystyle \forall a\;\forall b\;\exists c\;\forall x\;{\Big (}x\in c\iff (x=a\lor x=b){\Big )}}
$$

### Aksjomat sumy

Dla dowolnej rodziny zbiorów $r$ istnieje zbiór $u$, do którego należą dokładnie te elementy $x$, które należą do co najmniej jednego spośród zbiorów, które są elementami rodziny $r$:
$$
{\displaystyle \forall r\;\exists u\;\forall x\;{\Big (}x\in u\iff \exists a\;(x\in a\land a\in r){\Big )}}
$$

### Aksjomat zbioru potęgowego

Dla każdego zbioru $x$ istnieje zbiór $p$, którego elementami są dokładnie podzbiory zbioru $x$:
$$
{\displaystyle \forall x\;\exists p\;\forall z\;{\Big (}z\in p\iff \forall y\;(y\in z\Rightarrow y\in x){\Big )}}
$$

## Zasada indukcji matematycznej

Jeżeli

1. istnieje taka liczba naturalna $n_0$, że $T(n_0)$ jest zdaniem prawdziwym,
2. dla każdej liczby naturalnej $n\geqslant n_0$ prawdziwa jest implikacja $T(n)\Rightarrow T(n + 1)$,

to $T(n)$ jest zdaniem prawdziwym dla każdej liczby naturalnej $n\geqslant n_0$

## Zasada abstrakcji, klasy abstrakcji, zbiór ilorazowy

### Przykłady

1. Przykład 1

## Homomorfizm/izomorfizm, jądro i obraz homomorfizmu

Homomorfizmem grup $\Phi:G\rightarrow H$ nazywamy odwzorowanie pomiędzy grupami, które zachowuje strukturę grupy.

- Monomorfizm: homomorfizm grup, który jest injekcją (odwzorowanie róznowartościowe)
- Epimorfizm: homomorfizm grup, który jest surjekcją (odwzorowanie "na")
- **Izomorfizm:** homomorfizm grup, który jest bijekcją (odwzorowanie wzajemnie jednoznaczne)

Jądro $\{g\in G:\Phi(G)=eH\}$ oraz obraz $\{h\in H:\exist_{g\in G}\Phi(g)=h\}$ homomorfizmu $\Phi$ są podgrupami odpowiednio $G$ i $H$.

### Przykład

Istnieje homomorfizm pomiędzy grupą przekształceń symetrii $n$-kąta foremnego a grupą permutacji jego wierzchołków. Każdemu przekształceniu symetrii można przypisać permutację wierzchołków, którą ono powoduje. Przypisanie to jest monomorfizmem grup.

W przypadku trójkąta równobocznego jest to jednocześnie epimorfizm, zatem grupa jego symetrii jest izomorficzna z $S_3$.

W przypadku wielokątów o większej liczbie wierzchołków nie jest to już epimorfizm i grupa symetrii takiego $n$-kąta foremnego jest właściwą podgrupą grupy $S_n$.

## Lemat Kuratowskiego-Zorna

Jeżeli w zbiorze częściowego uporządkowania $X$ dla każdego łańcucha istnieje ograniczenie górne, to w zbiorze $X$ istnieje element maksymalny

# Zagadnienia na 4.0

## Krata, krata zupełna, algebra Boole’a

### Przykłady

1. Przykład 1
2. Przykład 2

## Definicja funkcji tworzącej

### Przykłady

1. Przykład 1
2. Przykład 2
3. Przykład 3

## Równania rekurencyjne i metody ich rozwiązywania

## Opisz grupę $\Phi(5)$: rząd grupy, rzędy elementów, cykliczność

## Grupy permutacji, cykle, transpozycje, grupy symetryczne $S_n$ i alternujące $A_n$

## Lemat Kuratowskiego-Zorna w terminach antyłańcuchów

## Definicja liczby Stirlina I rodzaju

## Pokaż, że w każdej grupie $(a^{-1})^{-1}=a$ oraz $(ab)^{-1}=b^{-1}a^{-1}$

### $(a^{-1})^{-1}=a$

Jeżeli $G$ jest grupą, to zachodzi $a\cdot a^{-1}=a^{-1}\cdot a=e$, tzn:

- $a^{-1}$ jest elementem odwrotnym $a$,
- $a$ jest elementem odwrotnym $a^{-1}$.

$(a^{-1})^{-1}$ jest elementem odwrotnym $a^{-1}$, zatem $(a^{-1})^{-1}=a$.

### $(ab)^{-1}=b^{-1}a^{-1}$

## Pokaż homomorficzność grup $\R$ oraz $\R_+$. Wskaż jądro i obraz homomorfizmu

## Zasada włączania-wyłączania

## Definicja liczby Bella. Liczba Bella zbioru pustego, 1-, 2-, 3-elementowego

Liczba Bella dla liczby naturalnej $n$ (oznaczana jako $B_n$) jest to liczba podziałów zbioru $\{1,\dots,n\}$

- $B_0=1$
  - $\{\}$
- $B_1=1$
  - $\{\{1\}\}$
- $B_2=2$
  - $\{\{1,2\}\}$
  - $\{\{1\},\{2\}\}$
- $B_3=5$
  - $\{\{1,2,3\}\}$
  - $\{\{1\},\{2,3\}\}$
  - $\{\{2\},\{1,3\}\}$
  - $\{\{3\},\{1,2\}\}$
  - $\{\{1\},\{2\},\{3\}\}$

## Twierdzenie Cantora-Bernsteina

Dla dowolnych liczb kardynalnych $n$, $m$ jeżeli $n\leqslant m$ i $m\leqslant n$, to $n=m$

### Przykład

Twierdzenie Cantora-Bernsteina pozwala na proste uzasadnienie wielu faktów teorii mocy, co bez tego twierdzenia często pociągałoby konieczność przeprowadzania długich i skomplikowanych dowodów. Przykładowo łatwo jest wykazać, że dowolny przedział otwarty jest równoliczny ze zbiorem liczb rzeczywistych (równoliczność tę ustala złożenie funkcji liniowej z tangensem). Z twierdzenia Cantora-Bernsteina natychmiastowo otrzymujemy, że przedział domknięty również ma moc continuum, bo przecież: $(a,\ b)\subset[a,\ b]\subset\R$, gdzie $a<b$.

## Porządek liniowy, dobry porządek, twierdzenie o dobrym uporządkowaniu zbioru

## Własności obrazów i przeciwobrazów funkcji

## Twierdzenie Kuratowskiego - kryterium planarności grafu. Kryterium eulerowskości grafu

### Twierdzenie Kuratowskiego

Graf skończony jest planarny wtedy i tylko wtedy, gdy nie zawiera podgrafu homeomorficznego z grafem $K_5$ ani z grafem $K_{3,3}$.

### Kryterium eulerowskości

Aby istniał cykl Eulera, każdy wierzchołek grafu musi posiadać stopień parzysty.

Aby istniała ścieżka Eulera, każdy wierzchołek grafu za wyjątkiem dwóch musi posiadać stopień parzysty.

### Przykłady

1. Przykład 1
2. Przykład 2
