#include <iostream>
#include <cstdlib>
#include "menu.h"

using namespace std;

void wyczyscEkran() {
    system("cls"); 
}

void pauza() {
    cout << "\nNacisnij ENTER aby kontynuowac...";
    system("pause");
}

void Ekran_start(bool pokazRanking) {
    cout << "   _________________________________________________ " << endl;
    cout << "  |                                                 |" << endl;
    cout << "  |    .-------.                                    |" << endl;
    cout << "  |   /   o   /|      ZGADNIJ LICZBE                |" << endl;
    cout << "  |  /_______/ |      --------------------         |" << endl;
    cout << "  |  |   o   | /      By: Mikolaj Sobiech           |" << endl;
    cout << "  |  '-------'                                      |" << endl;
    cout << "  |_________________________________________________|" << endl;
    cout << "  |                                                 |" << endl;

    cout << "  |  [ 1 ] ROZPOCZNIJ GRE                           |" << endl;

   
    if (pokazRanking) {
        cout << "  |  [ 2 ] RANKING TOP 5                            |" << endl;
    }

    cout << "  |  [ 3 ] ZAKONCZ PROGRAM                          |" << endl;
    cout << "  |_________________________________________________|" << endl;
    cout << "  |                                                 |" << endl;
    cout << "  |  System gotowy... Wybierz opcje: ";
}