#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void binario(int n, int posizione)
  {
  if (posizione>0)
    {
    binario(n/2 ,posizione-1);
    if (n & 1 >0 )
      cout <<"1";
   else
     cout <<"0";
    }
  }  
void base_n(int n, int posizione,int base)
  {
  int resto;
  if (posizione>0)
    {
    base_n(n/base ,posizione-1,base);
    resto=n %base; 
    if (resto<10)
      cout << resto;
    else if (resto <36)
      cout << (char) ('A' + resto-10);  
    else 
      cout << (char) ('a' + resto-10);  
    }
  }  
int dimtesto=16;   
void stampariga(const char * testo , int numero )
  {
  // testo[0]='N';
  cout<<setw(dimtesto)<<testo<<setw(4)<<numero<<setw(4); binario(numero,8); 
  cout<<setw(4)<<"0x"<<hex<<setw(4)<<setfill('0')<<numero<<setfill(' ')<<dec<<endl;
  }  
  
  
  
  void stampariga3(const char * testo , int numero)
  {
  printf("%16s%4i   " ,testo,numero); binario(numero,8);
  printf("  0x%04x \n" ,numero);
  }
  
   
  stampariga2(const char * testo, int numero)
 {
   printf("%16s %3i   ",testo,numero); binario(numero,8);
   printf("  0x%04x \n",numero); 
 }  
int main()
  {
  int num1,num2;
  cout << "dammi i numero e base ";cin>> num1>>num2;
  cout <<endl;
  base_n (num1 ,8,num2);
   //cout << setw(4) << num1 << " somma " << num1+num2 << " = " << (num1 ^ num2) <<endl;
  }
