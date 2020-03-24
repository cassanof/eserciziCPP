#include <iostream>
using namespace std;

//funzione che riceve tre float e restituisce la somma

float somma3num(float a, float b, float c) {
        return a+b+c;
}

//funzione che riceve tre numeri e restituisce il massimo
float returnMax(float a, float b, float c) {
    if(a>=b && a>=c) {
        return a;
    } else if(b>=c && b>=a) {
        return b;
    } else if(c>=b && c>=a){
        return c;
    } else {
        return 0;
    }
}


//funzone che riceve un intero >1 e restituisce il fattoriale
int returnFact(int a) {
    if (a==2) return 2;
    return (a*returnFact(a-1));
}


int main() {
    cout << somma3num(5,6,2.5) << "\n";
    cout << returnMax(1,5,5) << "\n";
    cout << returnFact(7) << "\n";
}