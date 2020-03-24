#include <iostream>
#include <cstring>
using namespace  std;
int main(int argn, char ** argc, char * env[])
  {
  int a,b; char c;
  cout << " dammi i due numeri "; cin >> a>>b;
  cout << " dammi l'operatore  "; cin >> c;
  if (c=='+') {cout << a << c << b <<" = "<< a+b;}
  else if (c=='-') cout << a << c << b <<" = "<< a-b;
  else if (c=='*') cout << a << c << b <<" = "<< a*b;
  else if (c=='/') cout << a << c << b <<" = "<< a/b;
  else cout << "operatore sconusciuto " << c ;
  }
