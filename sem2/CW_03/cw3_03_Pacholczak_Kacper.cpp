#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

void ilosc_danych(int *i){
    int d;
    fstream F;
    F.open("dane.txt");
    if(F.good()){
        while(!F.eof()){
            F >> d;
            *i=*i+1;}}
    else
        cout << "nie uda³o siê otworzyæ pliku";
    F.close();
}

void wczytaj_dane(int tab[]){
    int i=0;
    fstream F;
    F.open("dane.txt");
    while(!F.eof()){
        F >> tab[i];
        i++;
    }
    F.close();
}

int dodaj(int tab[],int rozmiar){
    int s=0;
    for(int i=0;i < rozmiar;i++)
        s=s+tab[i];
return s;
}

float srednia(int rozmiar,int suma){
    float srednia;
    srednia = (float)suma/(float)rozmiar;
    return srednia;
    }

float srednia(int tab[],int rozmiar){
    float srednia=0,iloraz=1;
    for(int i=0;i<rozmiar;i++)
        iloraz=iloraz*tab[i];
    srednia = pow((float)iloraz,1.0/(float)rozmiar);
    return srednia;}



int main(){
    int rozmiar=0,suma=0;
    int *wsk_rozmiar = &rozmiar;
    ilosc_danych(wsk_rozmiar); // znalezienie ilosci podanych liczb
    int *dane = new int[rozmiar]; //utworzenie tablicy na dane
    wczytaj_dane(dane);           //wczytanie danych do tablicy

    int(*wsk_suma)(int[],int) = dodaj;          //wskaŸniki do funkcji
    float(*wsk_sr_ar)(int,int) = srednia;
    float(*wsk_sr_geo)(int[],int) = srednia;

    suma=wsk_suma(dane,rozmiar);     //obliczenie sumy wszystkich liczb
    cout << "Suma to: " << wsk_suma(dane,rozmiar) << endl; //
    cout << "Œrednia Arytmetyczna to: " << wsk_sr_ar(rozmiar,suma) << endl;
    cout << "Œrednia Geometryczna to: " << wsk_sr_geo(dane,rozmiar) << endl;

return 0;}








