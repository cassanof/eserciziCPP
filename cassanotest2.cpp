//
// Created by Federico Cassano on 28/01/2020.
//
#include <iostream>
using namespace std;

int lati; //inutile dare un valore a lati siccome glielo diamo nella linea 14
void stampo ()   {
    //int lati;
    cout << "lati: "<< lati;
}
int main() {
    //int lati;
    cout << "valore di lati "; cin>> lati;
    stampo();
}