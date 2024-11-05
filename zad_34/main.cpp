#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double numer;
    cout << "Podaj numer w dzienniku:" << endl;
    cin >> numer;

    double liczba = 180 + numer;

    for (double i = liczba; i <= 200 + numer; i++) {
        double pierwiastek = sqrt(i);
        cout << "SQRT(" << fixed << setprecision(0) << i << ") = " << fixed << setprecision(2) << pierwiastek << endl;
    }

    return 0;
}

