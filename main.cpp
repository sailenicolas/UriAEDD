#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a, b;
    double c = 3.5/10;
    double d = 7.5/10;
    cin >> a;
    cin >> b;
    double f = (a*c)+(b*d);
    printf("MEDIA = %.5f\n",f/(c+d));

    return 0;
}