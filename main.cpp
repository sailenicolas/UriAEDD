#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a, b, c, pi= 3.14159;

    cin >>a>>b>>c;
    cout <<"TRIANGULO: "<<fixed << setprecision(3)<< (a*c)/2<<endl;
    cout <<"CIRCULO: "<< (pow(c, 2)*pi)<<endl;
    cout <<"TRAPEZIO: "<< ((a+b)*c)/2.0<<endl;
    cout <<"QUADRADO: "<< pow(b,2)<<endl;
    cout <<"RETANGULO: "<< a*b<<endl;
    return 0;
}