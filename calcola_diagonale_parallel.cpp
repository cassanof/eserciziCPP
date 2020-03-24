// Federico Cassano & Francesco Zambelli
#include <iostream> // carico libreria di I/O
#include <cmath>
using namespace std; // per usare cin cout senza std::
int main()
  {
  float base,altezza,profondita;
  cout << "dammi base: " ;
  cin >> base;
  cout << "dammi altezza: " ; std::cin >> altezza;
  cout << "dammi profondita: " ; std::cin >> profondita;
  if (base <=0  || altezza <= 0 || profondita <=0 )
    {
    cout << "dati non corretti";
    } else if(base==altezza && base==profondita) {
    cout << "e' un cubo\n";
    cout << "Volume: " << base * altezza * profondita;
    cout << "\nRadice: " << sqrt(pow(base, 2.0)+pow(altezza, 2.0)+pow(profondita, 2.0)) << "\n";
    } else {
    cout << "non e' un cubo\n";
    cout << "Volume: " << base * altezza * profondita;
    }
  return 0;
  }
