#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	string tekst;
	fstream F;
	ofstream G;
	F.open("tekst.txt");
	G.open("wyjsciowy.txt");
	if(F.good()){
	while(!F.eof()){
		F >> tekst;
		tekst[0]=toupper(tekst[0]);
		G << tekst << " ";
	}}
	else
	cout << "BŁĄD OBSŁUGI PLIKÓW" << endl;
	cout << "Program zakończył działanie";
	
	
    return 0;
}

