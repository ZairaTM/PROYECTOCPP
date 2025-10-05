//Código que pida introducir dos números y un signo de operación aritmética

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    char sim;

    cout <<"Ingresa dos números: ";
    cin >> num1 >>num2;
    cout <<"Ingrese un símbolo para realizar una operación aristmética, puede ser /, *, -, +: ";
    cin >> sim;

    if (sim == '+'){
        cout << num1 << "+" << num2<< "="<<(num1 + num2);
    }
    if (sim == '-'){
        cout << num1 << "-" << num2<< "="<<(num1 - num2);
    }
    if (sim == '*'){
        cout << num1 << "*" << num2<< "="<<(num1 * num2);
    }
    if (sim == '/'){
        cout << num1 << "/" << num2<< "="<<(num1 / num2);
    }
    
    return 0;
}