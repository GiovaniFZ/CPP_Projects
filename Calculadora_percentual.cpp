#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int op;
    float val1 = 0;
    float val2 = 0;
    float i = 0;

    cout << "Valor incial:" << endl;
    cin >> val1;
    cout << "Valor final:" << endl;
    cin >> val2;
    i = ((val2 - val1)/val1)*100;
    cout << "i = " << fixed << setprecision(2) << i << "%" << endl;
    return 0;
}