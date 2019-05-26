#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	int wier=1,space=0,slowa=0,czarne=1; //jedynki, aby zliczyć kończącą kropkę i pierwszy wiersz.
	string tekst;
	stringstream str;
	cout << "Wprowadz tekst. Zakoncz go znakiem '.'" << endl;
	getline(cin,tekst,'.');
	str << tekst;
	for(int i=0;i<tekst.length();i++){
		if(tekst[i]==' ')
			space++;
		else if(tekst[i]>=33 && tekst[i]<=255)
			czarne++;
		else if (tekst[i]==10)
			wier++;
	};
	while(str >> tekst){
		slowa++;};
	cout << "ilość spacji to: " << space<<endl;
	cout << "ilość znaków czarnych to: " << czarne<<endl;
	cout << "ilość wierszy to: " << wier <<endl;
	cout << "ilość słów to: " << slowa;
    
    return 0;
}
