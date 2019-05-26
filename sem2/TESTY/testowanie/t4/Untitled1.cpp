#include <iostream>
#include <cmath>
using namespace std;




    bool isvalid(float k){


        return k;
    }



int main(){
    float f=0;
    float d=0;
    do{
    cout << "Podaj dane: ";
    cin >> f;
    if(isvalid(f)==1)
        d=f;
    else
        cout << "Niepoprawne dane! Spróbuj ponownie." << endl;
    }while(isvalid(f)==0);
    return 0;
}
