#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("chcp 1250>0");
    int gora, dol;
    int i, y, liczba;

    powrot:
    cout << "podaj dolną wartość dol=";
    cin >> dol;
    cout << "podaj górną wartość gora=";
    cin >> gora;

    if (dol < 2 || gora <= dol) {
        cout << "wartości muszą być większe od 1 oraz wartość gor musi być większa od dol" << endl;
        goto powrot;
    }

    cout<<endl<< " Znalezione liczby bliźniacze to :" << endl;
    for (liczba = dol; liczba <= gora - 2; liczba++) {
        int liczba2 = liczba + 2;

        bool pierwsza_liczba = true;
        for (i = 2; i <= sqrt(liczba); ++i) {
            if (liczba % i == 0) {
                pierwsza_liczba = false;
                break;
            }
        }

        bool pierwsza_liczba2 = true;
        for (y = 2; y <= sqrt(liczba2); ++y) {
            if (liczba2 % y == 0) {
                pierwsza_liczba2 = false;
                break;
            }
        }

        if (pierwsza_liczba && pierwsza_liczba2) {
            cout << liczba << "     " << liczba2 << endl;
        }
    }

    return 0;
}