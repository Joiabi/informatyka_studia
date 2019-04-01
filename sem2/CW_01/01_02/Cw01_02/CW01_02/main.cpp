#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=0,b=0,c=0,delta=0;    //zmienne s�u��ce do zdefiniowania i policzenia rozwi�za� r�wnania kwadratowego
    string czy_powt;            //zmienna s�u��ca do zdecydowania czy powt�rzy� dzia�anie programu.
    do{                         //p�tla, by program m�g� powt�rzy� si� tyle razy ile wymaga tego u�ytkownik.
        cout << "Podaj wspolczynnik a rownania "; cin >> a; cout << endl;   //pobranie wsp. r�wnania.
        cout << "Podaj wspolczynnik b rownania "; cin >> b; cout << endl;
        cout << "Podaj wspolczynnik c rownania "; cin >> c; cout << endl;
        delta=b*b-4*a*c;    //policzenie delty
        if(delta<0){                                   //podanie ilo�ci rozwi�za�
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
            for(int i=0;i<=czy_powt.length();i++)       //petla by program ignorowa� wielko�c liter.
            czy_powt[i]=tolower(czy_powt[i]);
            if(czy_powt!="tak"&&czy_powt!="nie"){       //zabezpieczenie przed wpisywaniem innych warto�ci ni� "tak" lub "nie".
                cout << "Bledna odpowiedz. Sprobuj jeszcze raz." << endl;}
        }while(czy_powt!="tak"&&czy_powt!="nie");
    }while(czy_powt=="tak");
    return 0;}
