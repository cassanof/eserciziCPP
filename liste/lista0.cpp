#include <iostream>
/*
gestione di liste di dati con array

le operazioni principali sono:
inizializzazione
  l'archivio viene inizializzato con l'elemento vuoto (che va definito)
lettura / scrittura
  non vengono spostati gli elementi, solo letti o scritti
inserimento / cancellazione 
  la lista viene rimaneggiata per l'elemento che viene inserito / tolto
  in caso di inserimento, l'ultimo elemento della lista va perso
  in caso di rimozione, va aggiunto un elemento vuoto in coda
riordinamento per scambio (7.6 libro)
  per ordinare gli elementi va fornito un criterio (che in C e' una funzione) 
  per il confronto ordinale degli elementi. Tale funzione e' peculiare del tipo
  di dati. Ad esempio, con dati tipo {cognom nome data_nasc voto} il criterio 
  potrebbe essere il confronto dei cognomi oppure quello dei voti
  la funzione viene inserita come parametro con la seguente sintassi
  int (*) (TIPO,TIPO): puntatore(*) a funzione che riceve 
   due variabili di tipo TIPO (TIPO,TIPO) e restituisce int
ricerca (7.5)
  anche per la ricerca bisogna fornire un criterio di confronto tra la schede
  della lista e la scheda contenente i dati da cercare
  as esempio: cognome contiene "olo" oppure
              voto ==8

PRIMO ESEMPIO: DATI DI TIPO int PER UNA LISTA DI VOTI      
IN TUTTI GLI ESEMPI le funzioni di template seno uguali

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
      if (lista[j]==dato_nullo)
        continue; // non fa nulla
	  if (lista[i]==dato_nullo || (funzione0(lista [i] , lista [j]) <0)) 
          { // swap
          temp=lista[i]; lista[i]=lista[j];lista[j]=temp;
		  } 
      }
    }
  	return 0;
  }
/*
search:
confronta ciascun elemento della lista con il campione (dato)
confrontando i valori
*/
template <class TIPO>
int search0 (TIPO lista[],int len,TIPO dato_nullo, TIPO dato)
  { // restituisco l'indice della prima scheda che coincide
  // -1 se non trovo alcunche
  int i; 
  for (i=0;i<=len-1;i++)
    {
     if ( lista[i] != dato_nullo && lista[i]== dato)
	   return i;	
   }
  return -1; 
  }


int voti_comp1(int v1, int v2)
  { //primo criterio di riordino : crescente
  if (v1==v2) return 0; // uguali
  if (v1<v2)  return 1;  // maggiore
  else
    return -1; // minore	
 }
int voti_comp2(int v1, int v2)
  { //second criterio di riordino : calante
  if (v1==v2) return 0; // uguali
  if (v1>v2)  return 1;  // minore
  else
    return -1; // maggiore	
 }


#define N 14
main()
  {
  int voti[N];
  int votonullo=-1; // elemento nullo per la la nostra lista
  init(voti,N,votonullo); // sceglie init<int> poiche voti[] e votonullo sono interi
  insert<int>(voti,N ,0 ,9);	// forzatura di tipo non necessaria
  insert(voti,N ,9 , 18); 	
  insert(voti,N ,11 , 177);
  insert(voti,N ,9 ,148); // insert sposta in avanti quelli gia presenti
  write(voti,N ,6 ,6);  // write scrive (o sovrascrive)  senza spostare i restanti elementi

  std::cout<<"\nArchivio dopo l'inserimento:          ";
  for (int i=0;i<N ; i++)
    std::cout<< read(voti,N,i,votonullo) << "  " ;	
  std::cout <<"\nricerca posizione di  5 (-1=nn trovato) " << search0(voti,N,votonullo,5);  
  std::cout <<"\nricerca posizione di 18 (-1=nn trovato) " << search0(voti,N,votonullo,18);  

  std::cout<<"\nArchivio dopo il riordino crescente : ";
  sort(voti,N,votonullo,voti_comp1);
  for (int i=0;i<N ; i++)
    std::cout<< read(voti,N,i,votonullo) << "  " ;	
  std::cout <<"\nricerca posizione di  5 (-1=nn trovato) " << search0(voti,N,votonullo,5);  
  std::cout <<"\nricerca posizione di 18 (-1=nn trovato) " << search0(voti,N,votonullo,18);  

  std::cout<<"\nArchivio dopo il riordino calante   : ";
  sort(voti,N,votonullo,voti_comp2);
  for (int i=0;i<N ; i++)
    std::cout<< read(voti,N,i,votonullo) << "  " ;	
  std::cout <<"\nricerca posizione di  5 (-1=nn trovato) " << search0(voti,N,votonullo,5);  
  std::cout <<"\nricerca posizione di 18 (-1=nn trovato) " << search0(voti,N,votonullo,18);  
    
  init(voti,N,votonullo); // ripuliamo tutto prima di uscire dal programma
  
  }
