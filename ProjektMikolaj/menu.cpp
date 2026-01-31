#include <iostream>
#include <cstdlib>
#include "menu.h"

using namespace std;

// Funkcja czysci ekran, zeby menu bylo czytelne
void wyczyscEkran() {
    system("cls"); // dziala na Windows
}

// Funkcja zatrzymuje program, zeby gracz mogl przeczytac komunikat
void pauza() {
    cout << "\nNacisnij ENTER aby kontynuowac...";
    system("pause");
}

// Funkcja wyswietla ladny ekran startowy 
void Ekran_start(){

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
    cout << "  |  [ 2 ] RANKING TOP 5                            |" << endl;
    cout << "  |  [ 3 ] ZAKONCZ PROGRAM                          |" << endl;

    cout << "  |_________________________________________________|" << endl;
    cout << "  |                                                 |" << endl;

    cout << "  |  System gotowy... Wybierz opcje: ";
}
