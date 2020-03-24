#include <iostream>
#include <math.h>
using namespace std;
struct merce
  {
  char descrizione[90];
  float prezzo_acquisto, prezzo_per_la_vendita;
  int quantita ;
  };

void chiedo_dati(struct merce * a1) // per valore
  {
  cout << "\n descrizione: "; cin >> (*a1).descrizione ;
  cout << " prezzo_acquisto: "; cin >> (*a1).prezzo_acquisto ;
  cout << " prezzo_per_la_vendita: "; cin >> (*a1).prezzo_per_la_vendita ;
  }  
void stampo_dati(struct merce * a1) // per valore
  {
  cout << "\n descrizione: "; cin >> (*a1).descrizione ;
  cout << " prezzo_acquisto: "; cin >> (*a1).prezzo_acquisto ;
  cout << " prezzo_per_la_vendita: "; cin >> (*a1).prezzo_per_la_vendita ;
  }  
  
float guadagna(struct merce  a1) // per valore
  {  // stima del guadagno: potenza per attrito cona aria: v^3
  return(a1.prezzo_per_la_vendita-a1.prezzo_acquisto)*a1.quantita;

  }
#define N 3
  int main()
    {
        int num_prod;
        cout << "\nnumero prod: "; cin >> num_prod;
        struct merce elenco[num_prod];
        for (int i=0;i<num_prod; i++) chiedo_dati(&elenco[i]);
        for (int i=0;i<num_prod; i++) {
            stampo_dati(&(elenco[i]));
            cout << "\n guadagno: " << guadagna(elenco[i]);
        }
    }
