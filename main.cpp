#include <iostream>
#include <string>
using namespace std;


int wartoscMax(int a, int b, int c){
    int max = a;
    if (b>max) {
        max = b;
    }
    if (c>max) {
        max = c;
    }

    return max;
}



int main() {
    // ZAD 1pOBIERZ  Z KLAWIATURY 3 NEIUJEMNE LOICBZY CAKOWEITE. ZNAJDŹ NAJWIĘKSZĄ
    // Z NICH. WYŚWIETL SUMĘ PZOOSTAŁYCH LICZB TYLE RAZY ILE WYNOSI WARTOŚĆ NAJWIĘKSZEJ LICZBY
    int a, b, c;

    cout << "Podaj 3 liczby calkowite nieujemne" << endl;
    cin >> a >> b >> c;

    // if (a < 0 || b < 0 || c < 0) {
    //     cout << "wszystkie liczby nie są nieujemne, koniec programu" << endl;
    //     return 0;
    // }



    if (a >=0 && b >=0 && c >=0) {
        cout << "a:" << a <<  endl;
        cout << "b:" << b << endl;
        cout << "c:" << c << endl;

        int nasz_max = wartoscMax(a, b, c);
        int suma_pozostalych = a + b + c - nasz_max;
        cout << "nasz_max :" << nasz_max  << endl;
        cout << "suma_pozostalych :" << suma_pozostalych << endl;

        for (int i = 0; i < nasz_max; i++) {
            cout << suma_pozostalych << endl;
        }



    } else {
        cout << "wszystkie liczby nie sa nieujemne, koniec programu" << endl;
    }











    return 0;
}