#include <iostream>
using namespace std;

int main() {
    int num1 , num2 , num3;

    cout << "Enter three numbers " <<endl;

    cout <<endl << "Number 1: ";
    cin >> num1;
    cout<< "Number 2: ";
    cin >> num2;
    cout<< "Number 3: ";
    cin >> num3;


    if(num1 >= num2 && num1 >= num3)
        cout <<endl<< "Largest number among three numbers: " << num1<<endl;

    if(num2 >= num1 && num2 >= num3)
        cout <<endl<< "Largest number among three numbers: " << num2<<endl;

    if(num3 >= num1 && num3 >= num2)

        cout <<endl<< "Largest number among three numbers: " << num3<<endl;

    return 0;
}
