#include <iostream>
#include <string.h>
/*
gestione di liste di dati con array

TERZO ESEMPIO:
Al posto di voto (intero) uso una semplice struttura (struct)
anagrafica
struct anag { };
devo pertanto ridefinire:
dato nullo
funzioni di confronto per sort
funzioni di confronto per ricerca e ricerca parziale  
inoltre, per comodita' ,definisco una piccola funzione di stampa() 

*/



// creo una serie di funzioni tutte uguali a meno del tipo di ingresso
/*
insert: controlla che la posizione proposta sie entro i limiti 
dell'array ospite (0..len-1) altrimenti restituisce codice di errore (-1)
quindi sposta in avanti da pos fino in fondo (partendo dall'ultimo)
infine copia il dato nella posizione liberata
e restituisce zero (tutto ok)
l'eventuale dato in ultima posizione e' perso
*/
template <class TIPO>  
int insert (TIPO lista[],int len,int pos , TIPO dato)
  {
  if (pos<0 || pos>=len)
    return -1; // errore di tipo 1
  // sposto in avanti da pos fino a len -2
  for (int i=len-2 ; i>=pos ; i--)
    lista[i+1] =lista[i];
  lista[pos] =	dato;
  return 0;		
}

/*
l'inverso di insert:
dopo il controllo di coerenza della posizione di cancellazione,
sposta verso il basso da pos+1 fino a len -1
quindi inserisce in fondo l'elemento nullo
e restituisce zero (tutto ok)
*/
template <class TIPO>
int delete0 (TIPO lista[],int len,int pos , TIPO dato_nullo)
  {
  if (pos<0 || pos>=len)
    return -1; // errore di tipo 1
  for (int i=pos+1 ; i< len -1  ; i++)
    lista[i-1] =lista[i];
  lista[len-1] =	dato_nullo;
  return 0;		
}
/*
read
Legge il dato in posizione pos e lo copia in uscita
se pos e' erronea, copia il dato nullo
*/
template <class TIPO>
TIPO read (TIPO lista[],int len,int pos , TIPO dato_nullo)
  {
  if (pos<0 || pos>=len)
    return dato_nullo; 
  return lista[pos];		
}
/*
write
controlla conguia dela posizione di scrittura restituendo 
 eventualmente un codice di errore (-1)
scrive il dato in posizione pos e restituisce zero (tutto ok)
*/
template <class TIPO>
int write (TIPO lista[],int len,int pos , TIPO dato)
  {
  if (pos<0 || pos>=len)
    return -1; 
  lista[pos]=dato;	
  return 0;	
}

/*
init:
inizializza tutti gli elementi al tio nullo
*/
template <class TIPO>
int init (TIPO lista[],int len, TIPO dato_nullo)
  {
  if (len<0) 
    return -1; 
  for (int i=0 ; i< len   ; i++)
    lista[i] =dato_nullo;
  return 0;  
  }
/*
riordina l'archivio utilizzando un criterio (funzione0) esterno
sposta in fondo all'archivio gli elementi nulli e restituisce zero (tutto ok)
usa algoritmo (lento) di selezione
*/
template <class TIPO>
int sort (TIPO lista[],int len, TIPO dato_nullo, 
                  int (*funzione0)(TIPO,TIPO) )
  { // funzione di confronto passata per parametro
  int i,j;  TIPO temp;
  for (i=0;i<=len-2;i++)
    {
    for (j=i+1	; j<=len-1 ; j++)
      {
      if (!funzione0( lista[j],dato_nullo))
        continue; // non fa nulla
	  if (!funzione0( lista[i],dato_nullo)|| (funzione0(lista [i] , lista [j]) >0)) 
          { // swap
          temp=lista[i]; lista[i]=lista[j];lista[j]=temp;
		  } 
      }
    }
  	return 0;
  }
/*
ora la funzione search() usa una funzione mandata come parametro per il confronto
  
*/  
template <class TIPO>
int search0 (TIPO lista[],int len,TIPO dato_nullo, TIPO dato,
                        int (*uguaglia)(TIPO,TIPO))
  { // restituisco l'indice della prima scheda che coincide
  // -1 se non trovo alcunche
  // dato nullo e' sempre gestito da search, non da uguaglia()
  int i; 
  for (i=0;i<=len-1;i++)
    {
     if (!uguaglia( lista[i],dato_nullo)  && uguaglia(lista[i], dato))
	   return i;	
   }
  return -1; 
  }

// FINE FUNZIONI IN TEMPLATE (GENERICHE)

struct anag
  {
  char nominativo[40];
  short eta; // -1 se non valida. 
  };
  
  
  
// le funzioni di comparazione devono comportarsi come strcmp() (pag186)

int anag_comp1(anag v1, anag v2)
  { //primo criterio di riordino : nominativo +eta 
  int temp;
  // pag 186 strcmp restituisce >0 se il primo>secondo, =0 se uguali, <0 se primo<secodo
  temp=strcmp(v1.nominativo , v2.nominativo) ; 
  if (temp!=0) // nominativi diversi: resituisco il valore di strcmp
    return temp;
  // altrimenti devo controllare anche eta'.
  // se valida in entrambi --> restituisco la differenza (se uguali fa 0, come strcmp() )
  // se invalida in entrambi restituisco 0 -> schede uguali 
  // altrimenti prendo come primo quello con la data valida (scelta arbitraria)
  if (v1.eta!=-1 && v2.eta!=-1) return v1.eta-v2.eta ; // differenza
  if (v1.eta!=-1) return 1 ; // v1 viene prima
  if (v2.eta!=-1) return -1 ; // v2 viene prima
  return 0; // entrambe mancanti	
 }
int anag_comp2(anag v1, anag v2)
  { //secondo criterio di riordino : eta + nominativo
  // prima controllo eta: se valide e non uguali restituisco la differenza altrimenti controllo nominativi
  if (v1.eta!=-1 && v2.eta!=-1)
    { // eta valide entrambe
    if (v1.eta!=v2.eta) 
      return v1.eta-v2.eta ; // differenza
    else // etA valide ma uguali : controllo nominativi
      return strcmp(v1.nominativo , v2.nominativo) ;
    }
  // se entrambe eta non valide controllo solo cognomi
  if (v1.eta==-1 && v2.eta==-1)
    return strcmp(v1.nominativo , v2.nominativo) ;
  // se eta1 e' valida restituisco 1 (v1) altrimenti -1 (v2)
  if (v1.eta!=-1)
    return 1;
  else // 
    return -1; 
 }

// funzioni di confronto per search
// la seconda e' un esempio di ricerca per vicinanza
int anag_match1(anag v1, anag v2)
  { //corrispondenza esatta
  if (strcmp(v1.nominativo,v2.nominativo)==0) return 1;  // pag 186
  else return 0; // diversi
 }
int anag_match2(anag v1, anag v2)
  { //tolleranza +-1
  if (strncmp(v1.nominativo,v2.nominativo,2)==0) return 1;  // uguali le prime due
  else return 0; // diversi
 }

void stampa(anag a)
  { // stampa un semplice report
  std::cout<<"["<< a.nominativo<<" anni: "<<a.eta<<"] ";
  }
  
#define N 6
main()
  {
  anag elenco[N]; // lista di anagrafiche
  anag anagnullo={"",-1}; // anagrafica nulla
  anag el1  ={"bim",6}, el2={"bum",8},el3={"bam",6},el4={"bim",2}; // 4 elementi da inserire nominativo, eta
  anag test1={"bu",0},test2={"bamba",0}; // 2 elementi di test per la ricerca
  init(elenco,N,anagnullo);
  insert(elenco,N ,2 ,el1);	 	 // inserisco i 4 elementi nella lista in varie posizioni
  insert(elenco,N ,1 ,el2);	 	
  insert(elenco,N ,1 ,el3);	 	 // questo insert sposta in avanti il precedente
  insert(elenco,N ,4 ,el4);	 	
  std::cout<<"\nArchivio dopo l'inserimento:          ";
  for (int i=0;i<N ; i++) // stampa della situazione
    stampa(read(elenco,N,i,anagnullo))  ;	
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match1);  
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match1);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match2);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match2);
  std::cout<<"\nArchivio dopo il riordino nom+eta : ";
  sort(elenco,N,anagnullo,anag_comp1);
  for (int i=0;i<N ; i++)
    stampa(read(elenco,N,i,anagnullo))  ;		
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match1);  
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match1);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match2);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match2);
  std::cout<<"\nArchivio dopo il riordino eta+nom : ";
  sort(elenco,N,anagnullo,anag_comp2);
  for (int i=0;i<N ; i++)
    stampa(read(elenco,N,i,anagnullo))  ;		
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match1);  
  std::cout <<"\nricerca esatta   posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match1);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test1);std::cout << ": "<< search0(elenco,N,anagnullo,test1,anag_match2);  
  std::cout <<"\nricerca appross. posizione di " ; stampa(test2);std::cout << ": "<< search0(elenco,N,anagnullo,test2,anag_match2);
    
  init(elenco,N,anagnullo); // ripuliamo tutto
  
  }
