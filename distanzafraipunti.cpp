#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x0,x1,y0,y1,risultato;
    cout << "punto x0 "; cin >> x0;
    cout << "punto y0 "; cin >> y0;
    cout << "punto x1 "; cin >> x1;
    cout << "punto y1 "; cin >> y1;
    risultato = sqrt(pow(x0-x1, 2.0)+pow(y0-y1, 2.0));
    cout << risultato << "\n";
}