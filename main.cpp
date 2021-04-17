#include <iostream>
#include <cmath>        // std::abs
int compare(int a, int b);
int main() {
    int a, b, c,d;
std::cin >> a>>b>>c;
d = compare(a,b);
d = compare(c, d);
std::cout << d << " eh o maior"<< std::endl;

return 0;
}
int compare(int a,int b){
    int d = (a+b+std::abs((a-b)));
    return d/2;
}