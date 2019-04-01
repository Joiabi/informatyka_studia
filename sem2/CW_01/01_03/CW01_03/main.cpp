#include <iostream>
#include <ctime>
#include <cstdlib> //rand
#include <string>
using namespace std;

int losuj(int a, int b){
return rand()%(b-a+1)+a; // funkcja losujaca znak z podanego przedzia³u
}
bool sprawdz(string s, char c){ //funkcja szukaj¹ca danego znaku w tekscie
return s.find(c) != -1;         //s.find przyjmuje w. -1 jeœli nie znajdzie w tekœcie danej litery.
}
char losuj_sp(string sam_mal,string sam_duz){     //losuje spó³g³oskê.
char s;
s=losuj(33,125);
if(sprawdz(sam_mal, s) || sprawdz(sam_duz, s))
return losuj_sp(sam_mal,sam_duz);
else
return s;
}
char losuj_sam(string spol_mal,string spol_duz){   //losuje samog³oskê
char s;
s=losuj(33,125);
if(sprawdz(spol_mal, s) || sprawdz(spol_duz, s))
return losuj_sam(spol_mal,spol_duz);
else
return s;
}
int main(){
srand(time(NULL));
string spol_mal = "bcdfghjklmnpqrstvwxyz";
string spol_duz ="BCDFGHJKLMNOPQRSTVWXYZ";
string sam_mal = "aeiouy";
string sam_duz = "AEIOUY";
string haslo;          // LOSOWANIE 3 PIERWSZYCH ZNAKÓW
haslo += losuj(65,90); // wielkie litery
haslo += losuj(48,57); // cyfra
haslo += losuj(33,47); // znak specjalny
int n=0;
while(n<3){
cout<<"Dlugosc hasla: (przynajmniej 3 znaki) "; cin>>n;
}
for(int i=4; i<=n; i++){
if(sprawdz(sam_mal, haslo[haslo.length() - 1]) || sprawdz(sam_duz, haslo[haslo.length() - 1]))
haslo += losuj_sp(sam_mal,sam_duz);
else
haslo += losuj_sam(spol_mal,spol_duz);}
cout << "Haslo: " << haslo;
return 0;
}
