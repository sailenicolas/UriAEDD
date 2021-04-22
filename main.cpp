#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double d,c;
    int b,a;
    cin >> d;
    a=d;
    c=d-a;
    std::cout << "NOTAS:" << std::endl;
    b=a/100;
    a=a%100;
    std::cout <<fixed <<b<< " nota(s) de R$ 100.00" << setprecision(2)<< std::endl;
    b=a/50;
    a=a%50;
    std::cout <<b<< " nota(s) de R$ 50.00" << std::endl;
    b=a/20;
    a=a%20;
    std::cout <<b<< " nota(s) de R$ 20.00" << std::endl;
    b=a/10;
    a=a%10;
    std::cout <<b<< " nota(s) de R$ 10.00" << std::endl;
    b=a/5;
    a=a%5;
    std::cout <<b<< " nota(s) de R$ 5.00" << std::endl;
    b=a/2;
    a=a%2;
    std::cout <<b<< " nota(s) de R$ 2.00" << std::endl;

    std::cout << "MOEDAS:" << std::endl;
    std::cout <<a<< " moeda(s) de R$ 1.00" << std::endl;
    a=c*1000;
    b=a/500;
    a=a%500;
    std::cout <<b<< " moeda(s) de R$ 0.50" << std::endl;
    b=a/250;
    a=a%250;
    std::cout <<b<< " moeda(s) de R$ 0.25" << std::endl;
    b=a/100;
    a=a%100;
    std::cout <<b<< " moeda(s) de R$ 0.10" << std::endl;
    b=a/50;
    a=a%50;
    std::cout <<b<< " moeda(s) de R$ 0.05" << std::endl;
    b=a/10;
    std::cout <<b<< " moeda(s) de R$ 0.01" << std::endl;
    return 0;
}
