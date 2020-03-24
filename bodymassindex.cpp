#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float altezza,peso,bodyMassIndex;
    cout << "peso   : "; cin>> peso;
    cout << "altezza:"; cin>> altezza;
    bodyMassIndex = peso/(altezza*altezza*.0001);
    if ((bodyMassIndex<19 || bodyMassIndex>26) && (bodyMassIndex>14 || bodyMassIndex <21)){
        cout << "sei quasi normo peso bmi=" << bodyMassIndex << "\n";
    }
}