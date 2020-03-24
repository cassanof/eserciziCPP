//
// Created by Federico Cassano on 28/01/2020.
//
#include <iostream>
using namespace std;

//completare la funzione S_1() con un ciclo for in cui si scorrono i valori int dell'array X da 0 a lungh-1 sommando i valori se >5 o < -5 .
int S_1(int X[], int lungh)
{
    int somma = 0;
    for (int i = 0; i < lungh-1; i++)
        if(X[i]>5 || X[i]<-5) {
            somma += X[i];
        }
    return somma;
}

int main()
{
    int arrayX[] = {12, 3, 4, 15};
    int lungh = sizeof(arrayX) / sizeof(arrayX[0]);
    cout << "Somma: " << S_1(arrayX, lungh);
}
