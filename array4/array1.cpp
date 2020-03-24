#define N 100000  // ARRAY1
#include <iostream>
using namespace std;
main()
{
int i;
float array_mio[N]; // alloca nello stack
cout <<"\nindirizzo di i "<< &i;  
cout <<"\nindirizzo di array "<< array_mio;  
// inserisco 
for ( i=0 ; i<N ; i++)
  {
  cout<< "\nValore in posizione "<<i<<" ";cin>>array_mio[i];
  }
cout << "\nSTAMPO\n"; 
for (int i=0 ; i<N ; i++)
  {
  cout<< "\nValore "<<i<<" "<<" "<< array_mio[i];
  }
  }

  
