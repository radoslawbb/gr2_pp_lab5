// gr2_pp_lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*zadanie 1
    int liczby[10];
    cout << "Wprowadz 10 liczb calkowitych" << endl;

    for (int i = 0; i < sizeof(liczby)/sizeof(liczby[0]); i++) {
        cin >> liczby[i];
    }

    cout << "Liczby w odwroconej kolejnosci: " << endl;

    for (int i = sizeof(liczby)/sizeof(liczby[0]) - 1; i >= 0; i--) {
        cout << liczby[i] << endl;
    }*/

    /*zadanie 2
    int n;

    cout << "Wprowadz ilosc kolejnych liczb ciagu Fibonacciego: ";
    cin >> n;
    int* tab = new int[n+2];
    tab[0] = 0;
    tab[1] = 1;

    cout << "Kolejne liczby ciagu Fibonacciego: " << endl;

    for (int i = 2; i < n+2; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
        cout << tab[i] << endl;
    }*/

    int tab[10];
    float srednia=0;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        tab[i] = rand();
        cout << tab[i] << endl;
        srednia += tab[i];
        
    }

    int min=tab[0], max=tab[0];
    
    for (int i = 0; i < 10; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    srednia /= 10;

    int licznik = 0;

    for (int i = 0; i < 10; i++) {
        if (tab[i] < srednia) {
            licznik++;
        }
    }

    cout << "Ilosc elementow mniejszych od " << srednia << ": " << licznik << endl;
    cout << "Najmniejsza element w tablicy: " << min << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
