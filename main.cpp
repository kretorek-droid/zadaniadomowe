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
void wywolanieZadania11() {
    // ZAD 1pOBIERZ  Z KLAWIATURY 3 NEIUJEMNE LOICBZY CAKOWEITE. ZNAJDŹ NAJWIĘKSZĄZ NICH.
    // WYŚWIETL SUMĘ PZOOSTAŁYCH LICZB TYLE RAZY ILE WYNOSI WARTOŚĆ NAJWIĘKSZEJ LICZBY
    int a, b, c;

    cout << "Podaj 3 liczby calkowite nieujemne" << endl;
    cin >> a >> b >> c;

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
}


void wywolanieZadania16() {
    // pobierz 5 liczb z klawiatury i wyświetl informację i wyświetl informację
    // ile spośród nich było parzystych a ile nieparzystych
    int liczba_P = 0 , liczba_NP = 0;
    cout << "Podaj 5 liczb calkowitych : " << endl;
    for (int i = 0; i < 5; i++) {
        int liczba;
        cin >> liczba;
        if (liczba %2 == 0) {
            liczba_P++;
        } else {
            liczba_NP++;
        }
    }
    cout << "ilosc liczba NP: " << liczba_NP << endl;
    cout << "ilosc liczba P: " << liczba_P << endl;
}

void wywolanieZadania17() {
    //pobieraj znaki z klawiatury aż do wprowadzenia znaku x, ile znaków pobrano?

    char znak;
    do {
        cout << "podaj znak: " << endl;
        cin >> znak;
    }while (znak != 'x');
}



void wywolanieZadania119() {
    //wypisz wszystkie liczby 0 do 1000 podzielne przez 6
    for (int i = 0; i < 1001 ; i ++) {
        if ( i%6 == 0) {
            cout << i << endl;
        }
    }
    //rozwiązanie alternatywne
    // for (int i = 0; i < 1001 ; i+=6) {
    //  cout << i << endl;
    // }
}


int main() {


   //wywolanieZadania11();
   //wywolanieZadania16();
   //wywolanieZadania119();
    wywolanieZadania17();






}