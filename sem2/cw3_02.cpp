#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

//spr�bowa� tablic� wielowymiarow�!

int* wczytaj_macierz(int macierz[]){
	int i=0;
	fstream F;
	F.open("macierz.txt");
	while(!F.eof()){
		F >> macierz[i];
		i++;}
	return macierz;
	}

void suma_diagonali(int macierz[]){
	int suma =0;
	suma= macierz[0] + macierz[4] + macierz[8];
	cout << "Suma element�w na diagonali to: " << suma <<endl;
}
void mnozenie_skalar(int macierz[],int a){
	
	
	
	
	for(int i=0;i>=8;i++){
		macierz[i]=a*macierz[i];
	}
	cout << "Iloczyn macierzy przez liczb� " << a << "to:" << endl;
	for(int j=0;j<=8;j++){
		for(int k=0;k<=2;k++){
			cout << macierz[j]; }
			cout << endl;
	}
}
	

int main(){
int macierz[8];
wczytaj_macierz(macierz);
suma_diagonali(macierz);
mnozenie_skalar(macierz,2);


return 0;
};
