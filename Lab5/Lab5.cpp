// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    /*cout << "Zadanie 1: " << endl << endl;
    int tab[10];
    int liczba;
    for (int i = 0; i < 10; i += 1) {
        cout << "Wpisz liczbe: " << endl;
        cin >> liczba;
        tab[i] = liczba;

    }
    for (int i = 9; i >= 0; i -= 1) {
        cout << tab[i] << endl;
    }*/
    /*cout << "Zadanie 2:  " << endl << endl;
    int a;
    cout << "Podaj wielkoœæ tablicy" << endl;
    cin >> a;
    int* table = new int[a];
    table[0] = 0;
    table[1] = 1;
    cout << table[0] << endl;
    cout << table[1] << endl;
    for (int i = 2; i < a+2; i += 1) {
        table[i] = table[i - 1] + table[i - 2];
        cout << table[i] << endl;
    }*/
    cout << "Zadanie 3: " << endl;
    int tab[10];
    int suma;
    double srednia;
    int najwieksza = 0;
	for (int i = 0; i < 10; i += 1) {
        int los = rand();
        tab[i] = los;
        suma += tab[i];

        
	}
    for (int i = 0; i < 10; i += 1) {
        if (tab[i] > najwieksza) {
            najwieksza = tab[i];
        }
    }
    
    srednia = suma / 10.0;
    cout << "Srednia: " << srednia << endl;
    cout << "Najwieksza liczba: " << najwieksza << endl;
    
}

