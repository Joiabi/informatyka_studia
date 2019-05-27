#include <iostream>
#include <cmath>
using namespace std;

class figura{
	public:
	virtual float pole() = 0;
	virtual float obwod() = 0;
	void wypisz();
	
};

class prostokat : public figura{
	public:
	float a,b;
	prostokat(float x,float y) : a(x),b(y){};
	float pole(){
		return a*b;
	}
	float obwod(){
		return 2*a+2*b;
	}	
	void wypisz(){
	cout << "Boki figury to: " << a << " i " << b << endl;
	cout << "Obwod figury to: " << obwod() << endl;
	cout << "Pole figury to: " << pole() << endl;
	}	
};

class kwadrat : public prostokat{
	public:
	kwadrat(float a) : prostokat(a,a){}
};

class przestrzenna : public figura{
	virtual float objetosc() = 0;
};

class ostroslup : public przestrzenna{
	public:
	float r,h;
	ostroslup(float x,float y) : r(x),h(y){}
	
	float pole(){
		return M_PI*r*r;
	}	
	
	float objetosc(){
		return (pole()*h)/3;
	}

	float obwod(){
		return 2*M_PI*r;
	}

	void wypisz(){
	cout << "Wysokosc bryly to: " << h << " a promien " << r << endl;
	cout << "Obwod podstawy bryly to: " << obwod() << endl;
	cout << "Pole podstawy bryly to: " << pole() << endl;
	cout << "Objetosc bryly to: " << objetosc() << endl;
	}
};

class graniastoslup: public przestrzenna, public prostokat{
public:
	float h;
	graniastoslup(float x,float y,float z) : prostokat(x,y),h(z){}
	
	float pole(){
		return a*b;
	}	
	
	float objetosc(){
		return pole()*h;
	}

	float obwod(){
		return 2*a+2*b;
	}

	void wypisz(){
	cout << "Wysokosc bryly to: " << h << " boki podstaw " << a << " i " << b << endl;
	cout << "Obwod podstawy bryly to: " << obwod() << endl;
	cout << "Pole podstawy bryly to: " << pole() << endl;
	cout << "Objetosc bryly to: " << objetosc() << endl;
	}
};

int main(){
	cout << "Prostokat: " << endl;
	prostokat p(1,2);
	p.wypisz();
	cout << endl;
	
	cout << "Kwadrat: " << endl;
	kwadrat k(5);
	k.wypisz();
	cout << endl;
	
	cout << "Ostroslup: "<<endl;
	ostroslup o(5,5);
	o.wypisz();
	cout << endl;
	
	cout << "Graniastoslup: " << endl;
	graniastoslup g(2,5,6);
	g.wypisz();
	
	return 0;
}
