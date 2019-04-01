#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m=0,n=0;
    cout << "Podaj ilozbe kolumn: "; cin >> n;  cout << endl;
    cout << "Podaj liczbe wierszy: "; cin >> m; cout << endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout << setw(5) << i*j;
            }
        cout << endl;
        }
    return 0;
    }
