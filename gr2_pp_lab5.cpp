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


    /*zadanie 3
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
    cout << "Najmniejsza element w tablicy: " << min << endl; */

    /*zadanie 4
    int x, y;
    cout << "Podaj wymiary macierzy [x][y]: " << endl;
    cin >> x >> y;
    float** macierz = new float *[x];
    for (int i = 0; i < x; i++){
        macierz[i] = new float[y];
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Wprowadz liczbe dla macierz[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    } */

    /*zadanie 5
    int n;
    float tablica[10];
    float srednia = 0;
    do {
        cout << "Wprowadz ilosc liczb rzeczywistych z zakresu [0,10]: ";
        cin >> n;
    } while (n < 0 || n>10);

    for (int i = 0; i < 10; i++) {
        if (i < n) {
            cout << "Wprowadz liczbe do tablicy: ";
            cin >> tablica[i];
        }
        else {
            tablica[i] = 0;
        }
    }

    float max = tablica[0], min = tablica[0];

    for (int i = 0; i < 10; i++) {
        cout << tablica[i] << endl;
        srednia += tablica[i];
        if (tablica[i] > max) {
            max = tablica[i];
        }
        if (tablica[i] < min) {
            min = tablica[i];
        }
    }
    srednia /= 10;

    cout << "Srednia: " << srednia << endl;
    cout << "Maksymalna: " << max << endl;
    cout << "Minimalna: " << min << endl; */
    
    /*zadanie 6
    int tablica[10];
    srand(time(0));
    int szczL = rand() % 11;
    cout << "Szczesliwa liczba: " << szczL << endl;
    int licz = 0;
    for (int i = 0; i < 10; i++) {
        tablica[i] = rand() % 11;
        cout << tablica[i] << endl;
        if (tablica[i] == szczL) {
            licz++;
        }
    }
    cout << "Szczesliwa liczba wystepuje " << licz << " razy w tablicy" << endl; */
    
    /*zadanie 7
    int x;
    cout << "Podaj wymiary macierzy kwadratowych: " << endl;
    cin >> x;
    float** macierz1 = new float* [x];
    float** macierz2 = new float* [x];
    float** macierz3 = new float* [x];
    for (int i = 0; i < x; i++) {
        macierz1[i] = new float[x];
    }

    for (int i = 0; i < x; i++) {
        macierz2[i] = new float[x];
    }

    for (int i = 0; i < x; i++) {
        macierz3[i] = new float[x];
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Wprowadz liczbe dla macierz1[" << i << "][" << j << "]: ";
            cin >> macierz1[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Wprowadz liczbe dla macierz2[" << i << "][" << j << "]: ";
            cin >> macierz2[i][j];
            macierz3[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }
    cout << endl;

    cout << "Macierz 1: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Macierz 2: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Wynik dodawania: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz3[i][j] << " ";
        }
        cout << endl;
    }*/
    

    /*zadanie 8
    int x;
    cout << "Podaj wymiary macierzy kwadratowych: " << endl;
    cin >> x;
    float** macierz1 = new float* [x];
    float** macierz2 = new float* [x];
    float** macierz3 = new float* [x];
    for (int i = 0; i < x; i++) {
        macierz1[i] = new float[x];
    }

    for (int i = 0; i < x; i++) {
        macierz2[i] = new float[x];
    }

    for (int i = 0; i < x; i++) {
        macierz3[i] = new float[x];
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Wprowadz liczbe dla macierz1[" << i << "][" << j << "]: ";
            cin >> macierz1[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Wprowadz liczbe dla macierz2[" << i << "][" << j << "]: ";
            cin >> macierz2[i][j];
            macierz3[i][j] = macierz1[i][j] * macierz2[i][j];
        }
    }
    cout << endl;

    cout << "Macierz 1: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Macierz 2: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Wynik mnozenia: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz3[i][j] << " ";
        }
        cout << endl;
    }*/

    /*zadanie 9
    int x;
    int s1 = 0;
    cout << "Podaj wymiary macierzy kwadratowej: " << endl;
    cin >> x;
    float** macierz = new float* [x];

    for (int i = 0; i < x; i++) {
        macierz[i] = new float[x];
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Wprowadz liczbe dla macierz[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }
    cout << endl;

    cout << "Macierz: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i == j) {
                s1 += macierz[i][j];
            }
        }
    }

    cout << "Suma liczb na glownej przekatnej: " << s1 << endl; */

    /*zadanie 10*/
    int tablica[10];

    for (int i = 0; i < 10; i++) {
        cout << "Wprowadz liczbe do tablicy: ";
        cin >> tablica[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 9; j >= 0; j--) {
            if (tablica[j] < tablica[j - 1]) {
                int tymcz;
                tymcz = tablica[j - 1];
                tablica[j - 1] = tablica[j];
                tablica[j] = tymcz;
            }
        }
    }
    cout << "Posortowana tablica: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << tablica[i] << endl;
    }
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
