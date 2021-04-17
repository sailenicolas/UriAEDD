#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, m, z;
    cin >> a;
    m = a/365;
    z = a%365;
    cout << m << " ano(s)"<<endl;
    m = z/30;
    z = z%30;
    cout << m << " mes(es)"<<endl;
    cout << z << " dia(s)"<<endl;

    return 0;
}