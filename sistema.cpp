#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m1,m2,q1,q2,x0,y0,risultato;
    do {
    cout << "m1: "; cin >> m1;
    cout << "m2: "; cin >> m2;
    cout << "q1: "; cin >> q1;
    cout << "q2: "; cin >> q2;
    } while (m1 == m2);
    x0=(q2-q1)/(m1-m2);
    y0=m1*x0+q1;

    cout << "le rette si intersecano in (" << x0 << "," << y0 << ")";
} 