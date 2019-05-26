#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	string tekst,a;
	stringstream str;
	ofstream G;
	G.open("wyjsciowy.txt");
	getline (cin,tekst,'.');
	str << tekst;
	int n=0;
	
	while(!str.eof()){
		str >> a;
		a[0]=toupper(a[0]);
		G << a << " ";
	}	
	
	str.seekg(0);
	
	while(str >> tekst){
		n++;
	}	

	G.close();
	cout << "Program zakończył działanie" << endl;
	cout << "wpisałeś " << n << " słów";
	
	
    return 0;
}

