#include <iostream>
using namespace std;

int main(){

    float str[20] ,average = 0, d = 0.0;
    int a ,b ,c ;


    do{
    cout<< "Enter the number of Data: ";
    cin >> a;

    if(a>20 )
        cout<<"Error ! number should in range of (1 to 20).\n";
    }while(a>20);

    for(b = 0 ; b < a ; b++){

        cout<<b+1<<". Enter Number: ";
        cin>> str[b];

        d = d + str[b];
    }
    average  = d/a;
    cout << "Average = "<< average;


    return 0;
}
