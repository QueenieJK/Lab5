// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
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
    /*cout << "Zadanie 3: " << endl;
	srand(time(NULL));
	int tab[10];
	int suma = 0;
	int suma2 = 0;
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
	int najmniejsza = najwieksza;
	for (int i = 0; i < 10; i += 1) {
	    if (tab[i] < najmniejsza) {
	        najmniejsza = tab[i];
	    }
	}
	cout << "Najwieksza liczba to: " << najwieksza << endl;
	cout << "Najmniejsza liczba to: " << najmniejsza << endl;
	srednia = suma / 10;
	cout << "Srednia wynosi: " << srednia << endl;
	cout << "Wartosci mniejsze od sredniej: " << endl;
	for (int i = 0; i < 10; i += 1) {
	    if (tab[i] < srednia) {
	        cout << tab[i] << endl;
	        suma2 += 1;
	
	    }
	}
	cout << "Jest ich: " << suma2 << endl;*/
	/*cout << "Zadanie 4:  " << endl;
	int wiersze, kolumny;
	int macierz[100][100];
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersze;
	cout << "Podaj liczbe kolumn: ";
	cin >> kolumny;
	cout << "Wprowadz wartosci do macierzy:" << endl;
	for (int i = 0; i < wiersze; i++) {
	    for (int j = 0; j < kolumny; j++) {
	        cout << "Element [" << i << "][" << j << "]: ";
	        cin >> macierz[i][j];
	    }
	}
	cout << "Twoja macierz:" << endl;
	for (int i = 0; i < wiersze; i++) {
	    for (int j = 0; j < kolumny; j++) {
	        cout << macierz[i][j] << " ";
	    }
	    cout << endl;
	}
	
	return 0;*/
	/*cout << "Zadanie 5: " << endl;
	double tab[10];
	int n;
	cout << "Ile liczb chcesz wprowadzic? (0-10): ";
	cin >> n;
	if (n < 0 || n > 10) {
	    cout << "Niepoprawna wartosc n" << endl;
	    return 0;
	}
	cout << "Wprowadz " << n << " liczb:" << endl;
	for (int i = 0; i < n; i++) {
	    cin >> tab[i];
	}
	for (int i = n; i < 10; i++) {
	    tab[i] = 0;
	}
	double suma = 0;
	double min = tab[0];
	double max = tab[0];
	for (int i = 0; i < 10; i++) {
	    suma += tab[i];
	    if (tab[i] < min) min = tab[i];
	    if (tab[i] > max) max = tab[i];
	}
	double srednia = suma / 10.0;
	cout << "Srednia: " << srednia << endl;
	cout << "Minimum: " << min << endl;
	cout << "Maksimum: " << max << endl;
	
	return 0;*/
	/*cout << "Zadanie 6: " << endl;
	srand(time(NULL)); 
	int tab[10];
	cout << "Wylosowane liczby w tablicy:" << endl;
	for (int i = 0; i < 10; i++) {
	    tab[i] = rand() % 11; 
	    cout << tab[i] << " ";
	}
	int szczesliwa = rand() % 11;
	cout << "Szczesliwa liczba to: " << szczesliwa << endl;
	int ile = 0;
	for (int i = 0; i < 10; i++) {
	    if (tab[i] == szczesliwa) {
	        ile++;
	    }
	}
	cout << "Szczesliwa liczba wystapila " << ile << " razy." << endl;
	return 0;*/
	/*cout << "Zadanie 7: " << endl;
	int n;
	cout << "Podaj wymiar macierzy kwadratowych (n): ";
	cin >> n;
	int A[100][100];
	int B[100][100];
	int C[100][100]; 
	cout << "Wprowadz elementy macierzy A:" << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << "A[" << i << "][" << j << "]: ";
	        cin >> A[i][j];
	    }
	}
	cout << "Wprowadz elementy macierzy B:" << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << "B[" << i << "][" << j << "]: ";
	        cin >> B[i][j];
	    }
	}
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        C[i][j] = A[i][j] + B[i][j];
	    }
	}
	cout << "Macierz wynikowa C = A + B:" << endl << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << C[i][j] << " ";
	    }
	    cout << endl;
	}
	return 0;*/
	/*cout << "Zadanie 8: " << endl;
	int n;
	cout << "Podaj wymiar macierzy kwadratowych (n): "<< endl;
	cin >> n;
	int A[100][100];
	int B[100][100];
	int C[100][100];
	cout << "Wprowadz elementy macierzy A:"<< endl << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << "A[" << i << "][" << j << "]: ";
	        cin >> A[i][j];
	    }
	}
	cout << "Wprowadz elementy macierzy B:"<< endl<< endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << "B[" << i << "][" << j << "]: ";
	        cin >> B[i][j];
	    }
	}
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        C[i][j] = 0;  
	        for (int k = 0; k < n; k++) {
	            C[i][j] += A[i][k] * B[k][j];
	        }
	    }
	}
	cout << "Macierz wynikowa C = A * B:" << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << C[i][j] << " ";
	    }
	    cout << endl;
	}
	
	return 0;*/
	/*cout << "Zadanie 9: " << endl;
	int n;
	cout << "Podaj wymiar macierzy kwadratowej (n): " << endl;
	cin >> n;
	int A[100][100];
	cout << "Wprowadz elementy macierzy:" << endl << endl;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cout << "A[" << i << "][" << j << "]: ";
	        cin >> A[i][j];
	    }
	}
	int suma = 0;
	for (int i = 0; i < n; i++) {
	    suma += A[i][i]; 
	}
	cout << "Suma elementow na glownej przekatnej wynosi: " << suma << endl;
	return 0;*/
	/*cout << "Zadanie 10: " << endl;
	int tab[10];
	cout << "Wprowadz 10 liczb calkowitych:" << endl;
	for (int i = 0; i < 10; i++) {
	    cin >> tab[i];
	}
	for (int i = 0; i < 9; i++) {              
	    for (int j = 0; j < 9 - i; j++) {      
	        if (tab[j] > tab[j + 1]) {         
	            int temp = tab[j];
	            tab[j] = tab[j + 1];
	            tab[j + 1] = temp;
	        }
	    }
	}
	cout << "Tablica posortowana rosnaco:" << endl;
	for (int i = 0; i < 10; i++) {
	    cout << tab[i] << " ";
	}
	cout << endl;
	return 0;*/
	    
}

