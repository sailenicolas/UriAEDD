#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b, d, f;
    double c, e;
    cin >> a>>b>>c;

    cin >> d>>f>>e;

    cout << "VALOR A PAGAR: R$ "<< std::fixed << std::setprecision(2)<< (b*c)+(f*e)<<endl;
    return 0;
}