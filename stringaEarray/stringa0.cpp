#include <iostream>
#include <cstdlib>
#include <iomanip>
// INTERI E CARATTERI ASCII NELLE STRINGHE
using namespace std;
int main()
  {
  // una stringa e' un array si char terminato con uno zero
  // http://www.asciitable.com/ 
  const char stringa1[] ="CIAO"; // C++ aggiunge uno zero in fondo usando doppi apici "xxx"
  char stringa2[] ={'C','I','A','O',0}; // cme sopra. notare lo 0 in fondo senza apici
  char stringa3[] ={67,'I',65,'O',0}; // come sopra. misto ascii e numeri
  char stringa4[] ={0x43,'I',0x41,'O',0}; // come sopra. misto ascii decimali e numeri
  char stringa5[] ={'A'+2 ,'I','a'-32 ,'O',0}; // come sopra. operazioni miste char int
  char stringa6[] ={static_cast<char>(0xff41+2),'i'+'A'-'a','a'+'S'-'s' ,'O',0}; // come sopra. il primo viene troncato
  
cout<< stringa1<<endl;    
cout<< stringa2<<endl;    
cout<< stringa3<<endl;    
cout<< stringa4<<endl;    
cout<< stringa5<<endl;    
cout<< stringa6<<endl;    
 
// uso misto  di caratteri e numeri come caratteri  
for (int i= 0 ; i< 10 ; i++) // stampo i primi caratteri
  cout << "  chr("<<setw(2)<< 'A'+i <<"):" << (char)  ('A' +i) ;
cout << "\n ('A' + 3 ) = " << 'A'+3 ;  // e' un int
cout << "\n (char)('A' + 3 ) = " << (char)('A' + 3 ) ; // casted to char
cout << "\n ('C' -'A') = " << 'C' -'A' ;  // e' un int
cout << "\n (int)('C' -'A') = " << (int)('C' -'A') ;

// cambiare stringa6 in MIAO
stringa6[0]='M';
cout << "\nstringa 6 cambiata: " << stringa6;
  
// dafare: stampare i caratteri ascii da 32 a 47
  
  
  }
