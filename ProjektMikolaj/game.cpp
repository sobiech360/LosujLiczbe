#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "game.h"
#include "menu.h"
#include "scores.h"

using namespace std;

void naprawCin() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// maks liczba zale¿nie od poziomu
int maksymalnaLiczba(int poziom) {

    if (poziom == 1) return 50;
    if (poziom == 2) return 100;
    return 250;
}

void graj() {

    wyczyscEkran();

    int poziom;

    cout << "Wybierz poziom trudnosci:\n";
    cout << "1. Latwy (1-50)\n";
    cout << "2. Sredni (1-100)\n";
    cout << "3. Trudny (1-250)\n";
    cout << "Wybor: ";

    if (!(cin >> poziom)) {
        cout << "Zly input!\n";
        naprawCin();
        pauza();
        return;
    }

    if (poziom < 1 || poziom > 3) {
        cout << "Nieprawidlowy wybor!\n";
        
        
        return;
    }

    int zakresMax = maksymalnaLiczba(poziom);

    int wylosowanaLiczba = rand() % zakresMax + 1;

    int podanaLiczba;
    int liczbaProb = 0;

    while (true) {

        liczbaProb++;
        cout << "\nProba " << liczbaProb << ": ";

        if (!(cin >> podanaLiczba)) {
            cout << "Podaj liczbe!\n";
            naprawCin();
            liczbaProb--;
            continue;
        }

        if (podanaLiczba < wylosowanaLiczba) {
            cout << "Za mala liczba!\n";
        }
        else if (podanaLiczba > wylosowanaLiczba) {
            cout << "Za duza liczba!\n";
        }
        else {

            cout << "\nBRAWO! Zgadles w " << liczbaProb << " probach!\n";

            string imie;
            cout << "Podaj imie: ";
            cin >> imie;

            zapiszWynik(imie, liczbaProb, poziom);
            pauza();
            return;
        }
    }
}
