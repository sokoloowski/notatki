/**
 * Na standardowe wejście programu podano liczbę całkowitą n>3,
 * a następnie ciąg n wartości typu double. Po ich wczytaniu
 * program ma wypisać trzy największe liczby w ciągu w trzech
 * kolejnych liniach. Czytamy i wypisujemy dane następująco:
 * 
 * cin>>x;
 * cout<<x<<std::endl;
 * 
 */

#include <iostream>
using namespace std;

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

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (liczby[j - 1] < liczby[j])
                swap(liczby[j - 1], liczby[j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << liczby[i] << endl;
    }
    return 0;
}