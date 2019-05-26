#include <iostream>
#include <cmath>
using namespace std;

class dana{
    public:
    virtual bool isvalid(float f)=0;
    virtual void get()=0;
};


class bok : public dana{
public:
    float d;

    bool isvalid(float k){
        if(k>=0)
            return 1;
        else
            return 0;
    }

    bok(float f){
    do{
    cout << "Podaj dane: ";
    cin >> f;
    if(isvalid(f)==1)
        d=f;
    else
        cout << "Niepoprawne dane! Spróbuj ponownie." << endl;
    }while(isvalid(f)==0);
    }

    void get(){
    cout << "dana to: " << d << endl;
    }

};


class kat : public dana{
public:
    float d;

    kat(float f){
    do{
    cout << "Podaj dane: ";
    cin >> f;
    if(isvalid(f)==1)
        d=f;
    else
        cout << "Niepoprawne dane! Spróbuj ponownie." << endl;
    }while(isvalid(f)==0);
    }

    void get(){
    cout << "dana to: " << d << endl;
    }

    bool isvalid(float k){
        if(k>=0 && k <=360)
            return 1;
        else
            return 0;
    }
};




int main(){
    cout << "Bok: ";
    bok b1(5);
    b1.get();
    cout << "Ten sam bok przez konstruktor kopiujący: ";
    bok b2(b1);
    b2.get();
    cout << "Kat: ";
    kat k1(1);
    k1.get();
    cout << "Ten sam kat przez konstruktor kopiujący: ";
    kat k2(k1);
    k2.get();

return 0;
}
