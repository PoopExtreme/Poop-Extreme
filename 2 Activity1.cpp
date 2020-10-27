#include <iostream>
using namespace std;

int main(){

    int a , b , c , d , e;

    cout << "Enter Integer: ";
    cin >> a;

    cout << "Enter Range: \n";
    cin >> b;

    for( c = 1 ; c <= b ; c++ ){

        d = a * c ;
        cout <<a ;
        cout <<" * " ;
        cout <<c;
        cout << " = " ;
        cout  <<d<<endl;
    }
    cout << "Code by: Lerak Roodz E. Lorenzo";


    return 0;
}
