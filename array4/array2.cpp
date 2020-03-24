#define N 4  // ARRAY2
#include <iostream>
using namespace std;
main()
{
int d;
cout<< "Dimensione array ";cin>>d;
float array_mio[d]; // alloca nello stack (max circa 1MB)
cout <<"\nindirizzo di i "<< &d;  
cout <<"\nindirizzo di array "<< array_mio;  

// inserisco 
for (int i=0 ; i<d ; i++)
  {
  cout<< "\nValore in posizione "<<i<<" ";cin>>array_mio[i];
  }
cout << "\nSTAMPO\n"; 
for (int i=0 ; i<d; i++)
  {
  cout<< "\nValore "<<i<<" "<<" "<< array_mio[i];
  }
  }

  
