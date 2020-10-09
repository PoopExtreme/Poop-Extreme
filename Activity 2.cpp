#include <iostream>
using namespace std;

int main(){

    int a , b , c1 , v = 99 , c = 203 , m = 301 , u = 68;

        cout << "=============================="<<endl;
        cout << "Choose What Product You Want =" << endl;
        cout << "                             ="<<endl;
        cout << "     [1]Vanila = 99          =" << endl ;
        cout << "     [2]Chocolate = 203      ="<< endl;
        cout << "     [3]Mango = 301          ="<< endl;
        cout << "     [4]Ube= 68              ="<< endl;
        cout << "                             ="<<endl;
        cout << "==============================";

        cout << endl<< "Enter Number: ";
        cin >> a;
        cout << "Your payment: ";
        cin >> b;

            if( a == 1){
                c1 = b - v;
                if(b < v){
                cout << endl<< "The Transaction Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
            if( a == 2){
                c1 = b - c;
                if(b < c){
                cout << endl<< "The Transaction Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( a == 3){
                c1 = b - m;
                if(b < m){
                cout << endl<< "The Transaction Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( a == 4){
                c1 = b - u;
                if(b < u){
                cout << endl<< "The Transaction Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
    return 0;
}
