//
// Created by Federico Cassano on 10/12/2019.
//
#include <iostream>
#include <cmath> // contiene le funzioni matematiche (pag 71  4.8)
using namespace std;
// verifica  se e' un quadrato perfetto >0
// restituisce la radice >0 se e' un quadrato,  0 altrimenti
// quindi se il risultato e' > 0 il numero e' un quadrato perfetto e
// il risultato stesso e' la sua radice
// LA VARIABILE LOCALE SI CHIAMA numerolocale. NELLA FUNZIONE CHIAMANTE (main())
//  HA UN ALTRO NOME (num)
//  num viene COPIATA  in numerolocale
int verificaSeQuadrato(int numerolocale)
{
    int radiceintera,risultato;
    if (numerolocale<0)
        return 0; // non accettabile
    // sqrt(num) equivale a pow(num, 0.5)
    // la radice n-esima di (num) si ricava con pow(num,1./n)
    // usare 1. nella precedente per forzare l'uso del double
    // alrimenti se n e' intero, 1/n fa sempre zero
    radiceintera=( int) sqrt(numerolocale)  ;
    //(int) esegue la trasformazone da double a int (cast)
    // radiceintera contiene il valore della radice troncato all'intero
    // ad esempio numero=17 -->> radiceintera=4
    if (radiceintera * radiceintera != numerolocale)
        risultato= 0;  // non e' un quadrato perfetto
    else
        risultato= radiceintera;
    return risultato;
}

int main() { //
    while (1) // ciclo infinito ; 1 e' sempre vero
    {
        int num,risultato;
        cout<< "\n numero da verificare (<=0 per uscire) :";  cin >> num;
        if (num<=0)
            break;// interrompo il ciclo e finisco
        // LA VARIABILE LOCALE SI CHIAMA num. NELLA FNZIONE HA UN ALTRO NOME (numerolocale)
        // num viene COPIATA  in numerolocale
        risultato = verificaSeQuadrato (num) ; // chiamo la funzione che aggiorna risultato
        if (risultato >0)  // e' un quadrato
        {
            printf("\n Il numero %d e' il quadrato di %d",num ,risultato);
            cout << "\n Il numero "<<num<< " e' il quadrato di " << risultato;
        }
        else printf("\n Il numero %d non e' un quadrato",num);
    }
    return (0);
}
