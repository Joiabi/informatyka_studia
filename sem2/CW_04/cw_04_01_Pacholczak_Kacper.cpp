#include <iostream>
#include <cmath>
using namespace std;

class punkt{
	float x,y;
	public:
		void ustal(float ax,float ay){
		x = ax;
		y=ay;}
		
		void wypisz(){
			cout << "Wsp�rz�dne to:" << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
		
		float odleglosc(punkt P2){
			float r = 0;
			r=pow(pow((x-P2.x),2.00)+pow((y-P2.y),2.00),1.00/2.00);
			return r;
		}
		void przesun(int ax,int ay){
			x = x + ax;
			y = y + ay;			
		}		
};




int main(){
	int x,y;
	
	cout << "Podaj wsp�rz�dne punktu A: " << endl;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;
	punkt A;
	A.ustal(x,y);
	A.wypisz();
	
	cout << "Podaj wsp�rz�dne punktu B: " << endl;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;
	punkt B;
	B.ustal(x,y);
	B.wypisz();
	
	cout << "odleg�o�� mi�dzy A i B to: " << A.odleglosc(B) << endl;
	cout << "podaj wektor przesuni�cia punktu A: " << endl;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;	
	A.przesun(x,y);
	A.wypisz();
	
	return 0;
}
