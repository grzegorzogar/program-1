#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

double metr (double);
double mila (double);
double cal (double);
double jard (double);

int main()
{
    cout << "|--------------------------|" <<endl;
    cout << "|Program zamiany jednostek |" <<endl;
    cout << "|          V.1.1           |" <<endl;
    cout << "|     by Grzegorz Ogar     |" <<endl;
    cout << "|--------------------------|" <<endl<<endl<<endl;

    cout << "Jednostki ktore obsluguje program: " <<endl;
    cout << "1. Metr [m]" << endl;
    cout << "2. Mila ladowa [mila]" << endl;
    cout << "3. cal [cal]" << endl;
    cout << "4. jard [jard]" << endl<<endl;

    cout << "Wybierz z jakiej jednostki chcesz przeliczac: " <<endl;

    double  wynik;
    int a;
    cin >> a ;

    switch(a)
        {
        case 1:
            metr(wynik);
        break;

        case 2:
            mila(wynik);
        break;

        case 3:
            cal(wynik);
        break;

        case 4:
            jard(wynik);
        break;

        default:
            cout <<"nie wybrano prawidlowej wartosci" << endl;
        }


cout << endl ;
system ("pause");

    return 0;
}



        double metr (double wynik)
        {
            cout << "Na jaka jednostke chcesz przeliczyc : " <<endl;

            double jaka,m ;
            cin >> jaka ;





             if (jaka==2)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> m ;

               wynik = m/1609.34 ;
               cout << "Wynik to: " <<wynik;
            }
            else if(jaka==3)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> m ;

               wynik = m*39.370078;
               cout << "Wynik to: " <<wynik;
            }
            else if (jaka==4)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> m ;

               wynik = m/0.9144 ;
               cout << "Wynik to: " <<wynik;
            }
            else
            {
                cout << "blednie podana wartosc" << endl ;
            }


            return wynik;
        }

        double mila (double wynik)
        {
             cout << "Na jaka jednostke chcesz przeliczyc : " <<endl;

            double jaka,mila ;
            cin >> jaka ;



            if (jaka==1)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> mila ;

               wynik = mila*1609.34 ;
               cout << "Wynik to: " <<wynik;
            }
            else if(jaka==3)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> mila ;

               wynik = mila*63359.8425;
               cout << "Wynik to: " <<wynik;
            }
            else if (jaka==4)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> mila ;

               wynik = mila*1759.99755 ;
               cout << "Wynik to: " <<wynik;
            }
            else
            {
                cout << "blednie podana wartosc" << endl ;
            }

            return wynik;
        }


        double cal (double wynik)
        {
             cout << "Na jaka jednostke chcesz przeliczyc : " <<endl;

            double jaka,ca ;
            cin >> jaka ;



            if (jaka==1)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> ca ;

               wynik = ca*0.0254 ;
               cout << "Wynik to: " <<wynik;
            }
            else if(jaka==2)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> ca ;

               wynik = ca*0.0000157;
               cout << "Wynik to: " <<wynik;
            }
            else if (jaka==4)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> ca ;

               wynik = ca*0.0278679 ;
               cout << "Wynik to: " <<wynik;
            }
            else
            {
                cout << "blednie podana wartosc" << endl ;
            }
            return wynik;

        }

        double jard (double wynik)
        {

         cout << "Na jaka jednostke chcesz przeliczyc : " <<endl;

            double jaka,jard ;
            cin >> jaka ;


            if (jaka==1)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> jard ;

               wynik = jard*0.914339 ;
               cout << "Wynik to: " <<wynik;
            }
            else if(jaka==2)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> jard ;

               wynik = jard*0.00057;
               cout << "Wynik to: " <<wynik;
            }
            else if (jaka==3)
            {
                cout <<"Podaj wartosc do przeliczenia: " << endl;
               cin >> jard ;

               wynik = jard*36 ;
               cout << "Wynik to: " <<wynik;
            }
            else
            {
                cout << "blednie podana wartosc" << endl ;
            }

            return wynik;
        }
