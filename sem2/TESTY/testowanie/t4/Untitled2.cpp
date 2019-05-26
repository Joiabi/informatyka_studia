#include <iostream>
#include <cmath>
using namespace std;

class dana{
	public:
	virtual float pole()=0;
	virtual float obwod()=0;
	void wypisz();
};

class prost : public figura {
	public:
	float d;
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

int main(){

	return 0;}
