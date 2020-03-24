#include <iostream>  // serve per includere le definizioni della libreria
#include <cmath>
#include <iomanip>

// bubble sort

using namespace std;  // permette di usare gli oggetti e le funzioni 

void ordina(int elenco [], short lunghezza ); // dichiarazione: e' prima di main

int main()
  {
  int  lista[]={34, 3, 2, 5, 6,23,43,88, 9, 5,43,23};
  // dim array :  dimensione in bytes dell'array / dimensione dell'elemento
  ordina (lista, sizeof(lista) / sizeof(lista[20]) ); // dim dell'array
  
  
  }

stampa(int dati[], short dim)
  {
  for (int i=0;i< dim;i++)
    {
    cout << setw(3) << dati[i];
    }
  cout << endl;
  }  
   
void scambia(int& a, int& b){  //"a,b=b,a;"?
int c;
c = a; a = b;b = c;
}//scambia    

void ordina(int dati[], short dim)
  { int c;
  cout<< " i  j   ";stampa(dati,dim);
  for (int i=0; i< dim-1;i++) // [0 .. dim -1]
    {
    for (int j=i+1;j<dim;j++)  // [ i+1 .. dim]
      {
      if(dati[i] > dati[j])
        { // dati[i],dati[j] = dati[j],dati[i]
        cout <<setw(2)<<i<<"  "<<setw(2)<<j<<"  "; 
        scambia(dati[i], dati[j]);
        //c=dati[i];dati[i]=dati[j];dati[j]=c;
        stampa(dati,dim);
        }
      }
    }  
}//ordina
