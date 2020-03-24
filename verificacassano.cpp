// Federico Cassano 3c

#include <iostream>
using namespace std;
int num_prod;

struct merce
  {
  float prezzo_di_acquisto, prezzo_al_pubblico;
  int quantita;
  char descrizione[90];
  };

void chiedi(struct merce * a1) // per pointer
  {
  cout << "\n descrizione: "; cin >> (*a1).descrizione ;
  cout << " prezzo di acquisto: "; cin >> (*a1).prezzo_di_acquisto ;
  cout << " prezzo al pubblico: "; cin >> (*a1).prezzo_al_pubblico ;
  cout << " quantita': "; cin >> (*a1).quantita ;
  }

void stampo(struct merce * a1) // per reference
  {
  cout << "\n\n descrizione: " << (*a1).descrizione ;
  cout << "\n prezzo di acquisto: " << (*a1).prezzo_di_acquisto ;
  cout << "\n prezzo al pubblico: " <<(*a1).prezzo_al_pubblico ;
  cout << "\n quantita': " << (*a1).quantita ;
  }

float guadagno(struct merce  a1) // per valore
  {
  return (a1.prezzo_al_pubblico-a1.prezzo_di_acquisto)*a1.quantita;
  }

float ricavotot(struct merce *elenco,int len)
{
    float somma=0;
    for (int i=0;i<len; i++)
        somma=somma + guadagno(elenco[i] ) ;
    return somma;
}


  int main()
    {
    cout << "\nnumero prodotti: "; cin >> num_prod;
    struct merce elenco[num_prod];
    for (int i=0;i<num_prod; i++) chiedi(&elenco[i]);
    for (int i=0;i<num_prod; i++) {
        stampo(&(elenco[i]));
        cout << "\n guadagno: " << guadagno(elenco[i]);
        }
    cout << "\n ricavo totale: " << ricavotot(elenco,num_prod );
    }