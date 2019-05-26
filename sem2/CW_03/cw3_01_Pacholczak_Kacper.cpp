#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float pierw(float a){
	return sqrt(a);}

float pierw(float a, int n){
return pow(a,1.0/n);	
}

int main(){
	int i=8;
	cout << "Liczba, jej pierwiastek stopnia drugiego, oraz trzeciego." << endl;
	for(int i=1;i<=10;i++){
	cout << setw(5)<< i << setw(10) << pierw(i) << setw(10) << pierw(i,3) << endl;
	}
return 0;
}
