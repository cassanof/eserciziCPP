//
// Created by Federico Cassano on 24/01/2020.
//
#include <iostream>
#include <cmath>
using namespace std;

struct calcolo {
    int numero;
    double media,deviazione;
};

//void stampa(double * voti, int len, calcolo & valoriCalcolati){ //calcolo & valoriCalcolati crea un alias, come un collegamento

//};

int chiediDati(double * voti, int len){
if (len<2) return -1; // errore almeno 2 campioni
for(int i=0;i<len;i++){cout<<"voto numero: "<<i+1<<" : "; cin >> voti[i];}
return 0;
};

void calcolatore(double * voti, int len, calcolo & valoriDaCalcolare){
double somma=0,std=0,media;
for(int i=0;i<len;i++){somma=somma+voti[i];}
media = valoriDaCalcolare.media = somma/len;
valoriDaCalcolare.numero=len;
somma=0;
for(int i=0;i<len;i++){somma=somma+pow(voti[i]-media,2);};
valoriDaCalcolare.deviazione=sqrt(somma)/(len-1);
}


int main(){
    //dichiarare N
    int N;
    cout <<"\nnumero di voti: "; cin >> N;
    //dichiarare array [N]
    double elencoVoti[N];
    //dichiarare struct
    struct calcolo calcoli[N];
    if(chiediDati(elencoVoti,N) !=0) {cout<<"errore";return 1;}
    calcolatore(elencoVoti,N,calcoli);
    stampa(elencoVoti,N,calcoli);
    //chiediDati
    //calcolatore
    //stampa
}