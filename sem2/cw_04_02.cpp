#include <iostream>
#include <cmath>
using namespace std;

class punkt{
	public:
		float x,y;
		void ustal(float ax,float ay){
		x = ax;
		y=ay;}
		
		void wypisz(){
			cout << "Wspó³rzêdne to:" << endl;
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

class okrag{
	public:
	float r;
	punkt O;
	void ustal(punkt A,float xr){
		O.x=A.x;
		O.y=A.y;
		r=xr;	}
	
	void ustal(float ax,float ay,float xr){
		O.x=ax;
		O.y=ay;
		r=xr;	}
		
		void wypisz(){
		cout << "Wspó³rzêdne to:" << endl;
		cout << "x = " << O.x << endl;
		cout << "y = " << O.y << endl;
		cout << "r = " << r << endl;
		}
		
		float pole(){
			return M_PI*r*r;
		}
};




main(){
	
	
	
	return 0;
}
