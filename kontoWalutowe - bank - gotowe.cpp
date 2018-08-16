#include <iostream>

using namespace std;

int main()
{
    cout << "Prosze wpisac haslo:" << endl;
    string haslo;
    float stanKonta = 1000;
    string dostepneOpcje;
    cin >> haslo;
    if (haslo == "haslo")
    {
        cout << "Twoj stan konta to: "; cout << stanKonta << endl;
        cout << "Wpisz komende(waluta/ kalkulator/ wplaWalute /wyplacWalute/ wyswietl):" << endl;
        cin >> dostepneOpcje;
    }
    else
    {
        cout << "Pozostaly Ci 3 proby wpisania hasla. Wpisz haslo ponownie:" << endl;
        for (int i=1; i<=3; i++)
        {
            cout << "Sprobuj ponownie:" << endl;
            cin >> haslo;
            if (haslo=="haslo")
        {
           cout << "Twoj stan konta to: "; cout << stanKonta << endl;
        cout << "Wpisz komende(waluta/ kalkulator/ wplaWalute /wyplacWalute/ wyswietl):" << endl;
        cin >> dostepneOpcje;
        break;
        }

            if ( i==3)
            {
                break;
            }

        }

    }
    if (dostepneOpcje == "waluta")
    {
        cout << "Swoje srodki mozesz wymienic na:" << endl;
        float tablica [4];
        tablica [0] = 3.77;
        tablica [1] = 4.3;
        tablica [2] = 3.79;
        tablica [3] = 0.45;
        float dzialanie;
        for (int i=0; i<=3; i++)
        {
            dzialanie = stanKonta / tablica [i];
            cout << dzialanie << endl;

        }
    }

    if (dostepneOpcje == "kalkulator")
    {
        cout << "Wpisz kwote, ktora chcialbys zamienic na inna walute (Dolary/ Euro/ Frank/ Korona):" << endl;
        float kwota;
        cin >> kwota;
         float tablica [4];
        tablica [0] = 3.77;
        tablica [1] = 4.3;
        tablica [2] = 3.79;
        tablica [3] = 0.45;
        float dzialanie1;
        for (int i=0; i<=3; i++)
        {
            dzialanie1 = kwota / tablica [i];
            cout << dzialanie1 << endl;
        }

    }
    if (dostepneOpcje == "wplacWalute")
    {
        cout << "Wpisz kwote (zl), ktora chcialbys wplacic:" << endl;
        float kwota;
        cin >> kwota;
         float tablica [4];
        tablica [0] = 3.77;
        tablica [1] = 4.3;
        tablica [2] = 3.79;
        tablica [3] = 0.45;
        float dzialanie2;
        cout << "Po wplacie takiej kwoty na koncie bedziesz mial: (Dolary/ Euro/ Frank/ Korona)" << endl;
        for (int i=0; i<=3; i++)
        {
            dzialanie2 = (kwota/tablica [i]) + (stanKonta/tablica[i]);
            cout << dzialanie2 << endl;

        }
    }
    if (dostepneOpcje=="wyplacWalute")
    {
        cout << "Wpisz kwote (zl), ktora chcialbys wyplacic:" << endl;
        float kwota;
        cin >> kwota;
         float tablica [4];
        tablica [0] = 3.77;
        tablica [1] = 4.3;
        tablica [2] = 3.79;
        tablica [3] = 0.45;
        cout << "Na koncie pozostanie: "; cout << stanKonta - kwota; cout << " zlotych" << endl;
        float dzialanie3;
        cout<< "Na koncie pozostanie (Dolary/ Euro/ Frank/ Korona):" << endl;
        for (int i=0; i<=3; i++)
        {
            dzialanie3 = (stanKonta /tablica [i]) - (kwota / tablica [i]);
            cout << dzialanie3 << endl;
        }
    }
    if (dostepneOpcje == "wyswietl")
    {
         float tablica [4];
        tablica [0] = 3.77;
        tablica [1] = 4.3;
        tablica [2] = 3.79;
        tablica [3] = 0.45;
        float dzialanie4;
        cout << "Na Twoim koncie znajduje sie (Dolarow/ Euro/ Frankow/ Koron):" << endl;
        for (int i=0; i<=3; i++)
        {
            dzialanie4 = stanKonta/tablica [i];
            cout << dzialanie4 << endl;

        }

    }
    }

