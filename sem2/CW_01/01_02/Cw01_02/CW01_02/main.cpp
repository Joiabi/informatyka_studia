#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=0,b=0,c=0,delta=0;    //zmienne s³u¿¹ce do zdefiniowania i policzenia rozwi¹zañ równania kwadratowego
    string czy_powt;            //zmienna s³u¿¹ca do zdecydowania czy powtórzyæ dzia³anie programu.
    do{                         //pêtla, by program móg³ powtórzyæ siê tyle razy ile wymaga tego u¿ytkownik.
        cout << "Podaj wspolczynnik a rownania "; cin >> a; cout << endl;   //pobranie wsp. równania.
        cout << "Podaj wspolczynnik b rownania "; cin >> b; cout << endl;
        cout << "Podaj wspolczynnik c rownania "; cin >> c; cout << endl;
        delta=b*b-4*a*c;    //policzenie delty
        if(delta<0){                                   //podanie iloœci rozwi¹zañ
            cout << "brak rozwiazan rownania!"<<endl;}
        else if(delta ==0){
            cout << "jedno rownanie x0= " << ((-1)*b)/(2*a)<<endl;}
        else{
            cout << "dwa rozwiazania: "<<endl;
            cout << "x1= " << (((-1)*b)+sqrt(delta))/(2*a)<<endl;
            cout << "x2= " << (((-1)*b)-sqrt(delta))/(2*a)<<endl;
        }
        do{
            cout << "Czy powtorzyc dzialanie programu? " << endl; cin >> czy_powt;
            for(int i=0;i<=czy_powt.length();i++)       //petla by program ignorowa³ wielkoœc liter.
            czy_powt[i]=tolower(czy_powt[i]);
            if(czy_powt!="tak"&&czy_powt!="nie"){       //zabezpieczenie przed wpisywaniem innych wartoœci ni¿ "tak" lub "nie".
                cout << "Bledna odpowiedz. Sprobuj jeszcze raz." << endl;}
        }while(czy_powt!="tak"&&czy_powt!="nie");
    }while(czy_powt=="tak");
    return 0;}
