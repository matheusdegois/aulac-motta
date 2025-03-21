#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, media;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

   
    media = (num1 + num2 + num3)/3;

    cout << "A media de " << num1 << " e " << num2 << " e " << num3 << " = " << media << endl;

    return 0;
}




