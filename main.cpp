#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a, b,c, d, r;
    cin >> a>>b;
    cin >> c>>d;
    r = sqrt(pow(c-a, 2)+pow(d-b,2));
    cout <<fixed << setprecision(4) << r<<endl;
    return 0;
}