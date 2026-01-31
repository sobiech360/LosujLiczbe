#include <iostream>
#include <fstream>
#include "scores.h"
#include "menu.h"

using namespace std;

void zapiszWynik(string imie, int liczbaProb, int poziom) {

    ofstream plik("scores.txt", ios::app);

    plik << imie << " " << liczbaProb << " " << poziom << endl;

    plik.close();
}

void pokazWyniki() {

    ifstream plik("scores.txt");

    if (!plik) {
        cout << "\nBrak zapisanych wynikow!\n";
        pauza();
        return;
    }

    string imie;
    int liczbaProb;
    int poziom;

    wyczyscEkran();
    cout << "========== RANKING ==========\n";

    while (plik >> imie >> liczbaProb >> poziom) {
        cout << "Gracz: " << imie
             << " | Proby: " << liczbaProb
             << " | Poziom: " << poziom << endl;
    }

    plik.close();
    pauza();
}
