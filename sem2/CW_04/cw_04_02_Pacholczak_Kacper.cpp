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
		cout << "Wspólrzedne okregu to:" << endl;
		cout << "x = " << O.x << endl;
		cout << "y = " << O.y << endl;
		cout << "r = " << r << endl;
		}

		float pole(){
			return M_PI*r*r;
		}


        void punkty_wspolne(okrag OKR){
        if( O.odleglosc(OKR.O) == 0 && r == OKR.r){
            cout << "Okregi pokrywaja sie. Nieskonczenie wiele punktow wspolnych." << endl;}
        else if( O.odleglosc(OKR.O) > r+OKR.r){
            cout << "Okregi sa rozlaczne zewnetrznie. Brak punktow wspolnych." << endl;}
        else if( O.odleglosc(OKR.O) == r+OKR.r){
            cout << "Okregi styczne zewnetrznie. Jeden punkt wspolny." << endl;}
        else if( abs(r-OKR.r) < O.odleglosc(OKR.O) && O.odleglosc(OKR.O) < r+OKR.r){
            cout << "Okregi przecinaja sie. Dwa punkty wspolne." << endl;}
        else if( O.odleglosc(OKR.O) == abs(r-OKR.r)){
            cout << "Okregi styczne wewnetrznie. Jeden punkt wspolny." << endl;}
        else if( O.odleglosc(OKR.O) < abs(r-OKR.r)){
            cout << "Okregi rozlaczne wewnetrznie. Brak punktow wspolnych." << endl;}

        }
};


main(){

    int x,y,r;

    cout << "Inicjacja okregu za pomoca punktu i promienia:" << endl;
	cout << "Podaj wspólrzedne srodka okregu A: " << endl;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;
	punkt A;
	A.ustal(x,y);
    okrag O1;
    cout << "Podaj promien okregu:  ";
    cin >> r;
    cout << endl;
    O1.ustal(A,r);
    O1.wypisz();
    cout << "Pole okregu A to: " << O1.pole() << endl;

    cout << "Inicjacja okregu za pomoca wspolrzednych i promienia";
    cout << "Podaj wspólrzedne srodka okregu B: " << endl;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;
	cout << endl;
    cout << "Podaj promien okregu:  ";
    cin >> r;
    cout << endl;
    okrag O2;
    O2.ustal(x,y,r);
    O2.wypisz();
    cout << "Pole okregu B to: " << O2.pole() << endl << endl;

    O1.punkty_wspolne(O2);

	return 0;
}
