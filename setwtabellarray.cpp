//Federico Cassano 3c

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argn ,char ** argc)
  {
  int valori[4]  = {3,15,227,1119};
  cout << "----------------------------\n";
  for (int i=0 ; i< 4 ; i++)
      cout << "| valore numero " << i+1 << " |"<<setw(8) <<valori[i] << "|"<< endl ;
  cout << "----------------------------";
  }


































