#include <iostream>
#include <cstring>
using namespace  std;
int main(int argn, char ** argc, char * env[])
  {
  int a,b; char c;
  cout << " dammi i due numeri "; cin >> a>>b;
  cout << " dammi l'operatore  "; cin >> c;
  switch (c)
    {
    case '+': 
      cout << a << c << b <<" = "<< a+b;break; 
    case '-': 
      cout << a << c << b <<" = "<< a-b;break; 
    case '*': 
      cout << a << c << b <<" = "<< a*b;break; 
    case '/': 
      cout << a << c << b <<" = "<< a/b;break; 
    default: cout << "operatore sconusciuto " << c ;
    }
  }
