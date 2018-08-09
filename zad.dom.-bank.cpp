#include <iostream>

using namespace std;

int main()
//Napisalam ten program, ale mam problem, bo zeby wykonac komende 'wyplac' musze ja wpisywac dwa razy,
//a zeby wykonac 'wyswietl' - musze wpisywac ja trzy razy:(
{

    cout << "Prosze podac haslo do swojego konta w banku" << endl;
    string haslo;
    haslo = "password";
    cin >> haslo;
    if ( haslo == "password")
    {
        cout << "Co chcesz zrobic? Wpisz: wplac, wyplac albo wyswietl" << endl;
    }
    else
    {
        cout << "Bledne haslo." << endl;
    }

    string wplac, wyplac, wyswietl;

    cin >> wplac;
    int stanKonta;
    if (wplac == "wplac")
    {
       cout << "Dostepne srodki: 1000 zl" << endl;
       cout << "Wpisz kwote, ktora chcesz wplacic:" << endl;
       cin >> stanKonta;
    }

    cin >> wyplac;
    int stanKonta2;
    if (wyplac == "wyplac")
    {
       cout << "Dostepne srodki: 1000 zl" << endl;
       cout << "Wpisz kwote, ktora chcesz wyplacic:" << endl;
       cin >> stanKonta2;
      if  (stanKonta2 > 1000)
      {
          cout << "Operacja niemozliwa do wykonania. Nie masz tyle srodkow na koncie." << endl;
      }
    }

    cin >> wyswietl;
    int stanKonta3;
    if (wyswietl == "wyswietl")
    {
        cout << "Dostepne srodki: 1000 zl" << endl;
    }
}



