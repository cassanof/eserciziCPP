#include <iostream>
#include <cstdlib>
#include <iomanip>
// STRINGHE e ARRAY di STRINGHE
// IN GENERE GLI ARRAY DI STRINGHE SI GESTISCONO COME LE STRINGHE:
// SI AGGIUNGE UNO ZERO IN FONDO PER INDICARE LA FINE ARRAY
using namespace std;
int main()
  {
  // una stringa e' un array si char terminato con uno zero
  // http://www.asciitable.com/ uui
  
  // il pointer stringa1 puo' essere cambiato, l contenuto no
  // il pointer stringa2 non puo' essere cambiato, il contenuto si
  const char *stringa1  ="CIAO"; // C++ aggiunge uno zero in fondo usando doppi apici "xxx"
  char       stringa2[] ={'A',0}; //  notare lo 0 in fondo senza apici = "A"
  char       stringa3[]   ={'P','A','P','P','O',0}; //  notare lo 0 in fondo senza apici
  
// ORA CREO DELLE LISTE (ARRAY) DI STRINGHE. lE TERMINO CON ZERO.
// LISTE MISTE DI STRINGHE MODIFICABILI E IN SOLA LETTURA. ATTENZIONE
  const char * elenco1 [] = {stringa1 ,stringa2,stringa3,0} ; // aggiungendo lo zero identifico la fine dell'ARRAY
  char *       elenco2 [] = {"CIAO" ,stringa2,stringa3,0} ; // come sopra
  const char * elenco3 [] = {stringa1,"A","PIPPO",0} ; // come sopra
  elenco2[2][1]='I'; // elenco2[2] E' MODIFICABILE
  //elenco2[0][0]='m'; // elenco2[0] **NON** E' MODIFICABILE

// GLI ARRAY TERMINATI CON 0 (ELEMENTO NULLO) POSSONO ESSERE SCANSIONATI
// SENZA CONOSCERNE LA LUNGHEZZA
// nel ciclo controllo NON l'INDICE MA IL CONTENUTO
// !!!!!!!!!!! L'ARRAY DEVE ESSERE TERMINATO CON ELEMENTO NULLO !!!!!!!!!!!
// verifico che i tre elenchi sono uguali
  cout << "\nprimo elenco  : ";
  for (int i=0;   elenco1[i] != 0  ;  i++) 
    {     printf("%s  ", elenco1[i]);    } 
  cout << "\nsecondo elenco: ";
  for (int i=0;   elenco2[i] != 0  ;  i++) 
    {     printf("%s  ", elenco2[i]);    } 
  cout << "\nterzo elenco  : ";
  for (int i=0;   elenco3[i] != 0  ;  i++) 
    {     printf("%s  ", elenco3[i]);    } 
 
 
cout << endl; 
  
  // array di stringhe o array di array di char
  const char * lista[]={"classe" ,"terza",0}; 
 
  }
