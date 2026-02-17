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
        Ekran_start();

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
        else if (wybor == 2) {
            pokazWyniki();
        }
        else if (wybor == 3) {
            cout << "\nDo zobaczenia!\n";
            return 0;
        }
        else {
            cout << "\nZly wybor!\n";
            pauza();
        }
    }
}
