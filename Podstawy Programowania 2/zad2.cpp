/**
 * Na standardowe wejście programu podano liczbę całkowitą n>0,
 * a następnie n liczb całkowitych > 1. Program ma wypisać 1,
 * jeżeli liczba w ciągu jest liczbą pierwszą i 0, jeżeli nią
 * nie jest. Liczba pierwsza dzieli się tylko przez 1 i siebie
 * samą. Wynikowego ciągu zer i jedynek nie rozdzielamy spacjami.
 * Na końcu wypisujemy znak końca linii.
 * Czytamy i wypisujemy dane następująco:
 * 
 * std::cin>>k;
 * std::cout<<0;
 * std::cout<<1;
 * std::cout<<std::endl; 
 * 
 */

#include <iostream>
using namespace std;

bool jest_pierwsza(int liczba) {
    for (int i = 2; i < liczba; i++) {
        if (liczba % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    double liczby[n];

    for (int i = 0; i < n; i++)
    {
        double input;
        cin >> input;
        liczby[i] = input;
    }

    for (int i = 0; i < n; i++)
    {
        if (jest_pierwsza(liczby[i])) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    cout << endl;

    return 0;
}