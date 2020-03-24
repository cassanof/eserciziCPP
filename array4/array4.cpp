#define N 3  // ARRAY4 matrice
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int d;
//cout<< "Dimensione array ";cin>>d;
float array[N][N]; 


// inserisco 
for (int i=0 ; i<N ; i++)
  {
  for (int j=0 ; j<N ; j++)
    {
    printf("Valore in riga %d colonna %d ",i,j) ;
    cin>>array[i][j];
    }
  }
cout << "\nSTAMPO\n"; 
for (int i=0 ; i<N ; i++)
  {
  for (int j=0 ; j<N ; j++)
    {
    printf("\nValore in riga %d colonna %d : %f",i,j,array[i][j]);
    }
  }
  
  }

  
