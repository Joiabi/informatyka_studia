#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,i=1,delta;
	string dane;
	ifstream F;
	F.open("dane.txt");
	if(F.good()){
	while(!F.eof()){
		F >> a;
		F >> b;
		F >> c;
		cout << "Funkcja numer " << i << endl;
		i++;
		delta = b*b-4*a*c;
		if(delta ==0)
			cout << "jedno miejsce zerowe: x0 = " << -b/2*a << endl;
		else if(delta > 0){
			cout << "dwa miejsca zerowe: x1 = " << (-b-sqrt(delta))/2*a << endl;
			cout << "dwa miejsca zerowe: x2 = " << (-b+sqrt(delta))/2*a << endl;}
		else
			cout << "brak miejsc zerowych" << endl;
			}
    F.close();}
    else
        cout << "Blad odczytu pliku!";
    return 0;
}
