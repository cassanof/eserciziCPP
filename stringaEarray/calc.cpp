#include <iostream>
#include <stdlib.h>
/*
comando che riceve tre parametri :
numero simbolo e numero
esegue numero operatore numero
calc 3 + 5  -->> stampa 8
calc 4 ( 6  -->> stampa   errore
calc pippo --> errore
*/
using namespace  std;
int main(int argn, char ** argc, char ** env)
  {
  	if (argn!=4) printf("numero di parametri sbagliato");
  	else
  	  if (atoi(argc[1])==0 || atoi(argc[3])==0)
  	    printf("numeri errati");
  	  else if (argc[2][0]=='+')
  	    printf ("%d ",atoi(argc[1]) + atoi(argc[3]));
  	  else if (argc[2][0]=='-')
  	    printf ("%d ",atoi(argc[1]) - atoi(argc[3]));
  	  else if (argc[2][0]=='/')
  	    printf ("%d ",atoi(argc[1]) / atoi(argc[3]));
  	  else if (argc[2][0]=='*')
  	    printf ("%d ",atoi(argc[1]) * atoi(argc[3]));
  	  else  
 	    printf("operatore  errato");
  //cout << argc[3];
}

