#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("chcp 1250>0");
    int gora, dol;
    int i, y,z,a, liczba;

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
        int liczba3 = liczba + 6;
        int liczba4 = liczba + 8;

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

         bool pierwsza_liczba3 = true;
        for (z = 2; z <= sqrt(liczba3); ++z) {
            if (liczba3 % z == 0) {
                pierwsza_liczba3 = false;
                break;
            }
        }

         bool pierwsza_liczba4 = true;
        for (a = 2; a <= sqrt(liczba4); ++a) {
            if (liczba4 % a == 0) {
                pierwsza_liczba4 = false;
                break;
            }
        }

        if (pierwsza_liczba && pierwsza_liczba2 && pierwsza_liczba3 && pierwsza_liczba4) {
            cout << liczba << "     " << liczba2 <<"  "<<liczba3 << "     " << liczba4 << endl;
        }
    }

    return 0;
}