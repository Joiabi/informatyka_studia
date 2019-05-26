#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string dane;
    fstream F("tekst.txt");
	ofstream G("tekst_zmieniony.txt"); //dzieki zastosowaniu ofstream program tworzy plik
	if(G.good() && F.good()){
		while(!F.eof()){
			F >> dane;
			dane[0]=toupper(dane[0]);
			G << dane << " ";
		}
	}
	else
	cout << "Blad przy otwieraniu pliku!";
	cout << "Program zakończył działanie";
	F.close();
	G.close();
    return 0;
}
