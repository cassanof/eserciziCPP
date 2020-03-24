#include <iostream>
#include <cstring>
using namespace  std;
int main(int argn, char ** argc, char * env[])
  { // stampa il nome dell'utente
  	char ** mioenv=env; // preservo env
  	const char * stringa="USERNAME=";
     for (int i=0; mioenv[i]!=0 ;i++)
       { if (strncmp(mioenv[i], stringa,
            strlen(stringa))==0)
         cout << "nome: "<< ": "<< 
		  mioenv[i]+ strlen(stringa)  <<endl;  
 }
}
