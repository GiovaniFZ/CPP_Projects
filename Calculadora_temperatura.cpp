#include <iostream>
using namespace std;

int main(){
    int op = 0;
    float temp = 0;
    float res = 0;

    cout << "Digite:" << endl;
    cout << "1 - Farenheint para Celsius" << endl;
    cout << "2- Celsius para Farenheint" << endl;
    cin >> op;

    switch(op){
        case 1: 
        cout << "Digite o valor em Farenheint: " << endl;
        cin >> temp;
        res = 5.0*((temp - 32)/9);
        cout << "Valor em Celsius: " << res << endl;
        break;
        case 2: 
        cout << "Digite o valor em Celsius: " << endl;
        cin >> temp;
        res = ((9.0/5.0)*temp)+32.0;
        cout << "Valor em Farenheint: " << res << endl;
        break;
        default: cout << "Opcao Invalida" << endl;
    }
    return 0;
}