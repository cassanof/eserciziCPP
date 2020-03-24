#include <iostream>
#include <cmath>
using namespace std;
struct calcolo
  {
  int numero;
  double media,deviazione; 
  };


    void stampa(double * voti,int lungh, calcolo & valori_calcolati)
    {
    cout << "\n\n voto numero: " << valori_calcolati.numero ;
    cout << "\n prezzo di acquisto: " << (*a1).prezzo_di_acquisto ;
    cout << "\n prezzo al pubblico: " <<(*a1).prezzo_al_pubblico ;
    cout << "\n quantita': " << (*a1).quantita ;
    }

int   chiedi_dati  (double * voti,int lungh)
    {
  if (lungh < 2) return -1; // errore : almeno due campioni
  for (int i=0; i < lungh ; i++)
    { cout << "voto numero "<< i+1 << " : ";cin >>voti[i]; }
  return 0;
  }

void fa_i_calcoli(double * voti,int lungh, calcolo & valori_da_calcolare)
  {
  double somma=0,std=0,media;
  for (int i=0; i < lungh ; i++) { somma=somma + voti[i];}
  media = valori_da_calcolare.media = somma / lungh;
  valori_da_calcolare.numero=lungh;
  somma=0; // azzero la somma
  for (int i=0; i < lungh ; i++) { somma= somma+ pow (voti[i] - media,2);}
  valori_da_calcolare.deviazione =sqrt(somma) / (lungh-1); // calcolo std
  }

int main()
  {
  // dichiarare N
  int N;
  cout<<"Numero di voti: "; cin >> N;
  // dichiarare array [N]
  double elenco_voti[N];
  // dichiarare struct
  struct calcolo miei_calcoli;
  if (chiedi_dati ( elenco_voti , N) != 0) { cout<< "errore"; return 1;}
  fa_i_calcoli(elenco_voti , N,  miei_calcoli) ;   // fa_i_calcoli
  
  stampa(elenco_voti , N,  miei_calcoli) ;// stampa
  }
