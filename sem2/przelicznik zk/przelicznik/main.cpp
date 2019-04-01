#include <iostream>

using namespace std;

int main()
{
    float x=0;
    do{
    cout << "Podaj dlugosc" << endl;
    cin >> x;
    cout << x*68/135 << endl;
    }while(x!=1337);
    return 0;
}
