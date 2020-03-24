#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x0,y0,a,b,c,risultato;
    do {
    cout << "x0: "; cin >> x0;
    cout << "y0: "; cin >> y0;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    } while (a==0 && b==0);
    //fabs si usa per avere il valore assoluto di una somma normale, praticamente è come usare le parentesi in matematica.
    risultato = fabs(a*x0+b*y0+c)/sqrt(a*a+b*b);
    cout << "risultato: " << risultato << "\n";
}