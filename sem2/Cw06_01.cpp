#include <iostream>
#include <cmath>
using namespace std;

class wektor {
	public:
		float x,y;
		wektor(float a, float b) : x(a), y(b){};
		
		float modul(){
			return sqrt(x*x+y*y);
		}
		
		void mnoz_skalar(float a){
		x=a*x;
		y=a*y;
		}
		
		void wyswietl(){
			cout << "wspolrzedne wektora to: " << x <<" i "<< y <<endl;
			cout << "dlugosc wektora to: " << modul() << endl; 
		}
		
		void mnoz_wektor(wektor w){
		cout << "iloczyn tych wektorów wynosi: "<< (x*w.x+y*w.y);		
		}
};


int main(){
	wektor w(5,5);
	wektor u(4,3);
	w.wyswietl();
	w.mnoz_skalar(2);
	w.wyswietl();	
	w.mnoz_wektor(u);
	
	return 0;
}
