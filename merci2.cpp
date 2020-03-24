#include <iostream>
#include <math.h>
using namespace std;
struct merce
  {
  float prezzo_di_acquisto, prezzo_al_pubblico;
  char descrizione[90];
  int quantita;
  };

void chiedo_dati(struct merce * a1) // per pointer
  {
  cout << "\n quantita: "; cin >> (*a1).quantita ;
  cout << "  prezzo di acquisto: "; cin >> (*a1).prezzo_di_acquisto ;
  cout << " descrizione: "; cin >> (*a1).descrizione ;
  cout << " prezzo al pubblico: "; cin >> (*a1).prezzo_al_pubblico ;
  }  
void stampo_dati(struct merce & a1) // per reference
  {
  cout << "\n quantita: "; cin >> a1.quantita ;
  cout << "  prezzo di acquisto: "; cin >> a1.prezzo_di_acquisto ;
  cout << " descrizione: "; cin >> a1.descrizione ;
  cout << " prezzo al pubblico: "; cin >> a1.prezzo_al_pubblico ;
  }  
  float ricavo(struct merce & a1)//per reference
  {
  return (a1.prezzo_al_pubblico-a1.prezzo_di_acquisto)*a1.quantita;
  }

float ricavo_totale(struct merce *merci,int num_merci)
  {
  double somma=0;
  for (int i=0;i<num_merci; i++)
    somma=somma + ricavo(merci[i] ) ; // per ref: passo come se fosse per valore
  return somma;
  }


#define N 3
  int main()
    {
    struct merce elenco[N];
    for (int i=0;i<N; i++)
      chiedo_dati (&(elenco[i])) ; // per ref: passo come se fosse per valore
    // ora ristampo tutti con anche la stima della velocita max
    for (int i=0;i<N; i++)
      {
      stampo_dati ((elenco[i])) ; // per poiintr: passo indirizzo
      cout << "\n veloc max stimata: " << ricavo(elenco[i] ); // per valore
     } 
    }
