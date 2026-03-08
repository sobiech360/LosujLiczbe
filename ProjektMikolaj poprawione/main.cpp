#include <iostream>
#include <ctime>
#include "menu.h"
#include "game.h"
#include "scores.h"

using namespace std;

int main() {
    srand(time(NULL));
    int wybor;

    while (true) {
        wyczyscEkran();

     
        bool dostepnyRanking = czySaWyniki();
        Ekran_start(dostepnyRanking);

        cin >> wybor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nZly input!\n";
            pauza();
            continue;
        }

        if (wybor == 1) {
            graj();
        }
        else if (wybor == 2 && dostepnyRanking) {
            pokazWyniki();
        }
        else if (wybor == 3) {
            cout << "\nDo zobaczenia!\n";
            return 0;
        }
        else {
            cout << "\nZly wybor lub opcja niedostepna!\n";
            pauza();
        }
    }
}