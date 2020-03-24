#include <iostream>
template <class NUMERO>
    NUMERO somma (NUMERO a, NUMERO b, NUMERO c){ return a+b+c;}

int main(){
    long long x=2, y=8, z=8;
    std::cout << somma<int> (2,5,6) << "\n";
    std::cout << somma<float> (2.8,5.7,6.0) << "\n";
    std::cout << somma<long long> (x,y,z) << "\n";
    std::cout << somma (2.8,5.7,6.0) << "\n"; //mette float
    std::cout << somma (5.854545454,77777775545.755,56.055666666555) << "\n"; //mette double
}