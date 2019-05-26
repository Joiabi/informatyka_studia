#include <iostream>
#include <cmath>
using namespace std;

class figura{
	public:
	virtual float pole()=0;
	virtual float obwod()=0;	
	void wypisz();
};

class prost : public figura {
	public:	
	float a,b;
	prost (float aa,float ab) : a(aa),b(ab){};
	
 float pole(){
		return a*b;}
 float obwod(){
		return (2*(a+b));
	}
	void wypisz(){
		cout << "boki to: " << a << " " << "i " << b << endl;
		cout << "pole to: " << pole() << endl;
		cout << "obwod to: " << obwod() << endl << endl;
	}

};

class kwadrat : public prost {
	public:
	kwadrat(float aa): prost(aa,aa){};	
};

class przestrzenna : public figura{
	public:
		virtual float objetosc()=0;
};

class graniastoslup : public przestrzenna{
	public:
		float a,b,h;
		
		
	
};




int main(){
	
	prost p(1,2);
	p.wypisz();
	kwadrat k(2);
	k.wypisz();
	
	//ostros³up i graniastos³up 
	//KOLOKWIUM KLASY, DZIEDZICZENIE, POLIMORFIZM.
	
	return 0;}
