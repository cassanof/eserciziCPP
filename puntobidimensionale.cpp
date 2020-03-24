#include <cmath>
#include <iostream>
using namespace std;

struct Punto_bidimensionale{
    int x,y;
};

Punto_bidimensionale mioarray[3];
double distanza (const Punto_bidimensionale & p1, const Punto_bidimensionale & p2) {
    double temp;
    temp=sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
    return temp;
}

int main(){
    for(int n=1;n<=3;n++) {
    Punto_bidimensionale p1;
    Punto_bidimensionale p2;
    cout << "punto p1.x "; cin >> mioarray[n].x;
    cout << "punto p1.y "; cin >> mioarray[n].y;
    cout << "punto p2.x "; cin >> mioarray[n].x;
    int risultato;
    risultato=risultato+distanza(p1,p2);
    cout << risultato << "\n";
    }
}