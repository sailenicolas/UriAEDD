#include <iostream>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b;
    cin >> a;
    b=a/3600;
    a=a%3600;
    std::cout << b<<":" << a/60<<":" << a%60<<endl;

    return 0;
}