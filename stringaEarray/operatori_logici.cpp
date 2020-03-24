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
  cout << "dammi i due numeri ";cin>> num1>>num2;
  cout <<endl;
  stampariga3("numero1",num1);
  stampariga2("numero2",num2);
  stampariga2("and",num1 & num2);
  stampariga("or",num1 | num2);
  stampariga2("xor",num1 ^ num2);
  /*
  cout<<setw(20)<<"numero1"<<setw(4)<<num1<<setw(4); binario(num1,8); 
  cout<<setw(4)<<"0x"<<hex<<num1<<dec<<setw(4)<<endl;
  cout<<setw(20)<<"numero2"<<setw(4)<<num2<<setw(4); binario(num2,8); 
  cout<<setw(4)<<"0x"<<hex<<num2<<dec<<setw(4)<<endl;
  cout<<setw(20)<<" and "<<setw(4)<<(num1 & num2)<<setw(4); binario((num1 & num2),8); 
  cout<<setw(4)<<"0x"<<hex<<(num1 & num2)<<dec<<setw(4)<<endl;

  cout << setw(4) << num1 << " and " << num2 << " = " << (num1 & num2) <<endl;
  cout << setw(4) << num1 << " or  " << num2 << " = " << (num1 | num2) <<endl;
  cout << setw(4) << num1 << " xor " << num2 << " = " << (num1 ^ num2) <<endl;
  */
  //cout << setw(4) << num1 << " somma " << num1+num2 << " = " << (num1 ^ num2) <<endl;
  }
