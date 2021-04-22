#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a,b,c, res1,res2,bottom,sqr1;
    cin >>a>>b>>c;
    sqr1=pow(b,2)-4*a*c;

    if(a==0|| sqr1<0){
        cout << "Impossivel calcular"<<endl;
    }else{
        res1= -b+ sqrt(sqr1);
        res2= -b- sqrt(sqr1);
        bottom= 2*a;
        printf("R1 = %.5f\n",res1/bottom);
        printf("R2 = %.5f\n", res2/bottom);
    }

    return 0;
}