#include <iostream>
#include <math.h>
using namespace std;
struct car
  {
  double potenza, cx , superficie_frontale;
  char modello[100];
  };

void chiedo_dati(struct car & a1) // per reference
  {
  cout << "\n modello: "; cin >> a1.modello ;
  cout << " potenza (cv): "; cin >> a1.potenza ;
  cout << " cx: "; cin >> a1.cx ;
  cout << " superficie frontale (m^2): "; cin >> a1.superficie_frontale ;
  }  
void stampo_dati(struct car * a1) // per pointer
  {
  cout << "\n\n modello: " << (*a1).modello ;
  cout << "\n potenza (cv): " << (*a1).potenza ;
  cout << "\n cx: " <<(*a1).cx ;
  cout << "\n superficie frontale (m^2): " << (*a1).superficie_frontale ;
  }  
  
  
  
float velocita_max(struct car  a1) // per valore
  {  // stima della velocita max: potenza per attrito cona aria: v^3
  return 32*pow(a1.potenza/ a1.cx / a1.superficie_frontale, 1./3);
  }
  
float velocita_media(struct car *cars,int num_macchine)
  {
  double somma=0;
  for (int i=0;i<num_macchine; i++)
    somma=somma + velocita_max(cars[i] ) ; // per ref: passo come se fosse per valore
  return somma/ num_macchine;
  }


#define N 3
  int main()
    {
    struct car elenco[N];
    for (int i=0;i<N; i++)
      chiedo_dati (elenco[i]) ; // per ref: passo come se fosse per valore
    // ora ristampo tutti con anche la stima della velocita max
    for (int i=0;i<N; i++)
      {
      stampo_dati (&(elenco[i])) ; // per poiintr: passo indirizzo
      cout << "\n veloc max stimata: " << velocita_max(elenco[i] ); // per valore
     } 
    }
