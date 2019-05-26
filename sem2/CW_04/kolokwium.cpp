#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;


void sortuj(int *tab){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
			if(tab[j]<tab[j+1]){
			swap(tab[j],tab[j+1]);
			}}}}




int main(){
	fstream F;
	F.open("dane.txt");
	int m,n;
	int tab[10];
	for(int i=0;i<10;i++){
		F >> tab[i];}
	
	sortuj(tab);
						
	for(int k=0;k<10;k++)
		cout << setw(5) << tab[k];
	
}
