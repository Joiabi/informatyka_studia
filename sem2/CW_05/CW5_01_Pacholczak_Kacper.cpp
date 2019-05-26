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
	    float pole()=0;
	    float obwod()=0;
	    void wypisz();
        virtual float objetosc()=0;
};

class graniast : public przestrzenna{
	public:
		float a,b,h;
    graniast (float x, float y, float z) : a(x), b(y), h(z){};

    float pole(){
    return a*b;
    };

    float obwod(){
    return (2*a+2*b);
    };

    float objetosc(){
    return pole()*h;
    };

    void wypisz(){
		cout << "boki podstawy to: " << a << " " << "i " << b << endl;
		cout << "wysokość to " << h << endl;
		cout << "pole podstawy to: " << pole() << endl;
		cout << "obwod podstawy to: " << obwod() << endl;
		cout << "objetosc to: " << objetosc() << endl << endl;
	}
};

class ostr : public graniast{
	public:
    ostr (float x, float y, float z) : graniast (x,y,z){};
    float objetosc(){
    return (pole()*h)/3;
    };
};


int main(){

    cout << "Prostokąt: " << endl;
	prost p(1,2);
	p.wypisz();
	cout << "Kwadrat: " << endl;
	kwadrat k(2);
	k.wypisz();
	cout << "Graniastoslup: " << endl;
    graniast g(2,5,1);
    g.wypisz();
    cout << "Ostroslup: " << endl;
    ostr o(1,1,3);
    o.wypisz();
	return 0;}
