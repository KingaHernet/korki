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
        for (int i=0; i<=4; i++)
        {
            dzialanie = stanKonta * tablica * i;
            cout << dzialanie << endl;

        }
    }
}
