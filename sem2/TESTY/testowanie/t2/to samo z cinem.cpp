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
	while(!str.eof()){
		str >> a;
		a[0]=toupper(a[0]);
		G << a << " ";
	}
	G.close();
	cout << "Program zakończył działanie";
	
	
    return 0;
}

