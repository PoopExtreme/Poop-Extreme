#include <iostream>
using namespace std;

int myFunction1(int, int);
int myFunction2(int, int);
int myFunction3(int, int);
int myFunction4(int, int);

int main(){
    int a , b , c , d = 0 , e , f , g ;

    do{
        cout << "\nEnter Number 1: " ;
        cin >> a ;
        cout << "Enter Number 2: " ;
        cin >> b ;
            if( a <= d || b <= d)
                cout << "\nError! Enter Positive Number\n" ;
    }while(a <= d || b <= d);


    c = myFunction1(a,b);
    e = myFunction2(a,b);
    f = myFunction3(a,b);
    g = myFunction4(a,b);

    cout << "\nMultiplication: "<< c << endl;
    cout << "Sum: "<< e << endl;
    cout << "Subtraction: "<< f << endl;
    cout << "Divide: "<< g << endl;

    cout <<"\nLerakz Roodz E. Lorenzo\n";
    return 0;

}
int myFunction1(int a , int b){

    int poop;
    poop = a * b ;
    return poop;
}

int myFunction2(int a , int b){

    int poop;
    poop = a + b ;
    return poop;
}
int myFunction3(int a , int b){

    int poop;
    poop = a - b ;
    return poop;
}
int myFunction4(int a , int b){

    int poop;
    poop = a / b ;
    return poop;
}

