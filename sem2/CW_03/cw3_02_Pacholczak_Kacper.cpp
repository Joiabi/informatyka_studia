#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

void wczytaj_macierz(int macierz[3][3]){
	ifstream F;
	F.open("macierz.txt");
	for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
            F >> macierz[i][j];
            }
            F.close();
        }

void wypisz_macierz(int macierz[3][3]){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout << setw(10)<< macierz[i][j];
        }
        cout<<endl;
    }
}

void suma(int macierz[3][3]){
    int s=0;
    for (int i=0;i<=2;i++)
        s=s+macierz[i][i];
    cout << "Suma elementow na diagonali macierzy to: " << s << endl;
}

void iloczyn(int macierz[3][3],int k){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
            macierz[i][j]=k*macierz[i][j];
    }
    wypisz_macierz(macierz);
}

void zeruj_macierz(int macierz[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      macierz[i][j] = 0;}}
}

void iloczyn(int macierz[3][3]){
    int macierz_pomnozona[3][3];
    zeruj_macierz(macierz_pomnozona);
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=2;k++){
                macierz_pomnozona[i][j]= macierz_pomnozona[i][j] + macierz[i][k]*macierz[k][j];
            }
        }
    }
    wypisz_macierz(macierz_pomnozona);
}


int main(){
int macierz[3][3];
int k=0;
wczytaj_macierz(macierz);
cout << "macierz poczatkowa: " << endl;
wypisz_macierz(macierz);
suma(macierz);
cout << "podaj skalar do wymnozenia macierzy: ";
cin >> k;
cout << "Macierz po wymnozeniu przez skalar: " << endl;
iloczyn(macierz,k);
cout << "Macierz po wymnozeniu przez macierz: " << endl;
wczytaj_macierz(macierz);
iloczyn(macierz);
return 0;
};

