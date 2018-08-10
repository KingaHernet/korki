#include <iostream>

using namespace std;

int main()
{
    cout << "Prosze podac haslo do swojego konta w banku:" << endl;
    string haslo;
    cin >> haslo;
    if (haslo == "haslo")
    {
        cout << "Haslo poprawne" << endl;
        cout << "Co chcesz zrobic? Wpisz: wplac, wyplac lub wyswietl" << endl;
    }
    else
    {
        cout << "Haslo niepoprawne" << endl;
        return 0;
    }
    string dostepneOpcje;
    int stanKonta;
    int kwota;
    stanKonta=1000;

    cin >> dostepneOpcje;
    if (dostepneOpcje=="wplac", "wyplac", "wyswietl")
    {
        cout << "Dostepne srodki:"<< endl;
        cout << stanKonta <<endl;
    }

    if (dostepneOpcje=="wplac")
    {
        cout << "Wpisz kwote, ktora chcesz wplacic:" << endl;
        cin >> kwota;
        cout << "Na koncie bedzie:" << endl;
        cout << stanKonta + kwota << endl;
    }

    if (dostepneOpcje=="wyplac")
    {
        cout << "Wpisz kwote, ktora chcesz wyplacic:" << endl;
        cin >> kwota;
        cout << "Na koncie pozostanie:" << endl;
        cout << stanKonta - kwota << endl;
    }



}
