#include <iostream>

using namespace std;

int main()
{
    int zm = 99;
    while (zm != 100) {


        //testujemy czy z dzielenia zm przez 2 dostaniemy resztę (liczby albo dzielą się przez 2 i otrzymujemy 0
        //albo nie i wtedy dostajemy reszty 1 -> modulo)
        //warunek zadziała gdy liczba będzie nieparzysta (bo np. 3/2 = 1 reszty <1> <- czyli wartość true)
        //trzeba bowiem pamiętać, że warunki mogą też działać dla liczb
        //alternatywny zapis warunku if (zm%2==1)
//        if (zm%2)
//            zm+=5; //<- równoważnik zapisu zm=zm+5
//        //operatorów skrótowych jest więcej: -=, *=, /=, %=, |=, &=, ^=
//        else
//            zm-=3;
        //zapis bardziej "programistyczny"
        zm+= (zm%2) ? 5 : -3;
        if (zm%6 != true) {
            continue;
        }
        cout << "Wartość zmiennej " << zm << endl;
        if (zm>300)
            break;

    }
    zm=10;
    while(zm<10) {
        cout << "Pętla numer: " << ++zm << endl;
    }

    cout << "DZIAŁANIE PĘTLI DO WHILE" << endl;
    int przebieg = 10;
    do {
        cout << "To jest " << ++przebieg << " przebieg pętli do while." << endl;
    } while(przebieg < 10);

    int liczba=0;
    cout << "Podaj liczbę z zakresu 1-7:";
    cin >> liczba;

    switch (liczba) {
        case 1: cout << "wybrany dzień to: poniedziałek"  << endl;
                cout << "pierwszy dzień pracy" << endl;
                break;
        case 2: cout << "wybrany dzień to: wtorek"  << endl;
                break;
        case 3: cout << "wybrany dzień to: środa" << endl;
                break;
        case 4: cout << "wybrany dzień to: czwartek"  << endl;
                break;
        case 5: cout << "wybrany dzień to: piątek"  << endl;
                cout << "weekend start!" << endl;
                break;
        case 6: cout << "wybrany dzień to: sobota" << endl;
                break;
        case 7: cout << "wybrany dzień to: niedziela" << endl;
                break;
        default: cout << "wybór dokonany  w niewłaściwy sposób";
    }



    return 0;
}
