#include <iostream>
#include <fstream>
#include <vector>
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

    vector<string> imiona;
    vector<int> proby;
    vector<int> poziomy;

    string imie;
    int liczbaProb;
    int poziom;

    while (plik >> imie >> liczbaProb >> poziom) {

        imiona.push_back(imie);
        proby.push_back(liczbaProb);
        poziomy.push_back(poziom);
    }

    plik.close();

    
    for (int i = 0; i < proby.size(); i++) {
        for (int j = i + 1; j < proby.size(); j++) {

            if (proby[j] < proby[i]) {

                swap(proby[i], proby[j]);
                swap(imiona[i], imiona[j]);
                swap(poziomy[i], poziomy[j]);
            }
        }
    }

    wyczyscEkran();
    cout << "===== TOP 5 =====\n";

    int limit = proby.size();
    if (limit > 5) limit = 5;

    for (int i = 0; i < limit; i++) {

        cout << i + 1 << ". Gracz: " << imiona[i]
            << " | Proby: " << proby[i]
            << " | Poziom: " << poziomy[i] << endl;
    }

    pauza();
}
