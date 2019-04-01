#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

bool sprawdz(string s, char c){ //funkcja szukaj¹ca danego znaku w tekscie
return s.find(c) != -1;         //s.find przyjmuje w. -1 jeœli nie znajdzie w tekœcie danej litery.
}

int main()
{
    string d = "dup";
    char k='.';
    cout << isalpha(k);
    return 0;
}
