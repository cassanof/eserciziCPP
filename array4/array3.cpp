#define N 4  // ARRAY3
#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
int d;
float *array_; 
cout<< "Dimensione array ";cin>>d;
array_ = (float*) calloc(d , sizeof(float)); 
if (array_==0)
  { cout << "errore di allocazione. fine progtramma ";
    exit(1);
    }
// alloca nello heap (max: memoria sistema)
cout <<"\nindirizzo di i "<< &d;  
cout <<"\nindirizzo di array "<< array_;  

// inserisco 
for (int i=0 ; i<d ; i++)
  {
  cout<< "\nValore in posizione "<<i<<" ";cin>>array_[i];
  }
cout << "\nSTAMPO\n"; 
for (int i=0 ; i<d; i++)
  {
  cout<< "\nValore "<<i<<" "<<" "<< array_[i];
  }
  free(array_);
  }

  
