//
// Created by Federico Cassano on 20/01/2020.
//
#include <iostream>
#define N 5 //numero persone
using namespace std;

struct dati {
    float peso, altezza, eta;
    char nome[50];
};

void chiedi(struct dati & a1)
{
    cout << "\n nome: "; cin >> a1.nome ;
    cout << " peso: "; cin >> a1.peso ;
    cout << " altezza: "; cin >> a1.altezza ;
    cout << " eta: "; cin >> a1.eta ;
}

void stampa(struct dati * a1)
{
    cout << "\n\n nome: " << (*a1).nome ;
    cout << "\n peso: " << (*a1).peso ;
    cout << "\n altezza: " <<(*a1).altezza ;
    cout << "\n eta: " << (*a1).eta ;
}

float bmi(struct dati & a1)
{
    return (a1.peso*a1.peso)/a1.eta;
}

int main() {
    struct dati lista[N];
    for (int i=0;i<N; i++)
        chiedi(lista[i]);
    for (int i=0;i<N; i++)
    {
        stampa(&(lista[i]));
        cout << "\n bmi: " << bmi(lista[i] );
    }
};
